
#include <Temperature_LM75_Derived.h>
TI_TMP102 temperature;


#include <Arduino.h>
#include <WiFi.h>
#include "time.h"
#include <ESP_Google_Sheet_Client.h>

// For SD/SD_MMC mounting helper
//#include <GS_SDHelper.h>

#define WIFI_SSID "Iaac-Wifi"
#define WIFI_PASSWORD "EnterIaac22@"

// Google Project ID
#define PROJECT_ID "iot-datalogging-422809"

// Service Account's client email
#define CLIENT_EMAIL "iot-datalogging@iot-datalogging-422809.iam.gserviceaccount.com"

// Service Account's private key
const char PRIVATE_KEY[] PROGMEM = "-----BEGIN PRIVATE KEY-----\nMIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQD1Fx2XOJCdDYOt\nT9+UDAZHS80RhjwPHnD1ocMZUF5efG3/BQjClPwVV1hv9Ai8YlZC8XYrtalA6cHR\nNvfknXK49izvYTLqn7kpvSXdj6qK04Nb4AcNlWy0c3SMPVK8i4vgXS3aCppFP5xh\nhJSb7Cs9Bn29ycYXZPaZhep8c16SKVy4ESoJqkXnqK05vgD8j7n2GyQOM57dIjYC\ntJD0U9pJKn8x5Ev1bryLeAyqVCVpTCSK0k8dfVSK20z422aVNFMHxV0/LLImoM6O\n96XhbVhMeZVteLvDdxcVinBJGEhc96BiI130ziHU/kebfPB1nfiq4FXtr81bfDkS\nK4aRDNHdAgMBAAECggEAAUQRzI6nvI/tzq7bbkXToHmlQQJq+/8BwVsJCW/vVNia\nrtcFUQ/471lIpSdjBioR3P2nSRmCmsm6TQzWIfGoPolS+ReM7kZN7AfEkszjqhzm\nkEprbugHLDVudCz66OtlmQ6SJo6odlQaSCypodaJ8KJAcwMASW2lkmxtJiBobCPU\n9tEOyZLAzZS+9mYVtyjv8epfKv2PzRCXWIFxy0GTVnBY/9ph9bZhfblGeCXOlewi\nSjFa5MTt8FDIChywsHh+pu2RmkfBVr6jKsNoZYoiDtEjCjNxmiW+bgdynyrRMGe2\nH74vf9Y3z+pS96EG200hRsF0r5ZcwccNFMArPapdhwKBgQD9AcrTILmookvZK7TQ\n4Ac2MV7lmC5XQu7vP45EcMsYiA6oUlnUxF1NtoZZU9OjJJnNn3g5oIbR9X81LRQF\nJgxX+bB8afyXs0jqpW2POjPSlmnH6TjwRwnIjt60xPOA3gS+d3v+zt3x8o1YwvH/\nxKxCh1BvHAUI3LjVmRze2x9qiwKBgQD3/Vkq8lzbCHH4n/Yx0SsI/BULI2mk6C2s\nB8BaWmpvTyYYhH+kHkgb8LmXCScXdbBJ0MXJxC/UdEuQgLvO+QmjAdBpdH3o6hjO\nz8T1CeWAdH8VfFIYLeP74qaz3c8M58S6Px9vxPhkuR73M0zvr9Hjmh9CrJKvNq8T\ndRY5a1qKNwKBgDRGe4bV+yZZqjxL6IdD0pmi582efOywureaNSX0/DGsYwLqSP9K\nN1EIRogMZu0Nce3nZirZ/SFCjS8Killp/CDtSUbbi0I42/cHiTSPvQdk5qRUjtwu\ngVn8Ew3cp8dXmDlWbLtAOOF10TimxuOm2kTAuqDKdEvZdyNDCJEPS1VzAoGAeyJL\nzRxMaOGXnajnmLLQWIS6ei5aPWyfiOTMaNCuOpilRNU9f6MdkOoFbO45f9eK8gv8\nuYN1cFtSTezt1AYp98tlzYbvIeBi8wWNOVJxp0ew9l0lciYPJrnSpkrDjRfjwcqn\n9FpsL68PphTN5dF6OTYEwZlouCFB6zpfD6Gzch8CgYEAqFjBEAa0bfywliy2/JXk\nGPy6a05jdaY2YwlAduBipDPekcWkEWJKpxl+rZbf6QTN46yIGGWdy2g6RV4/WZN6\n0p0LZKYenHf4g9DCe/4xjm0dFExQNF1XCQc28TkXQnKeyvALSQE47Uc2BZVKcc5j\nTOkCueSpWIiElO3+krjQbhk=\n-----END PRIVATE KEY-----\n";

// The ID of the spreadsheet where you'll publish the data
const char spreadsheetId[] = "1BN1hD6kthNi_HfZ63Q5z9K4AxLZHBJmvfcIC5dSe1eI";

// Timer variables
unsigned long lastTime = 0;  
unsigned long timerDelay = 30000;


// Token Callback function
void tokenStatusCallback(TokenInfo info);


// NTP server to request epoch time
const char* ntpServer = "pool.ntp.org";

// Variable to save current epoch time
unsigned long epochTime; 

// Function that gets current epoch time
unsigned long getTime() {
  time_t now;
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to obtain time");
    return(0);
  }
  time(&now);
  return now;
}




void setup() {
  Serial.begin(115200);
  Wire.begin();
  Serial.println();
  Serial.println();

  //Configure time
    configTime(0, 0, ntpServer);


 GSheet.printf("ESP Google Sheet Client v%s\n\n", ESP_GOOGLE_SHEET_CLIENT_VERSION);

// Connect to Wi-Fi
    WiFi.setAutoReconnect(true);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  
    Serial.print("Connecting to Wi-Fi");
    while (WiFi.status() != WL_CONNECTED) {
      Serial.print(".");
      delay(1000);
    }
    Serial.println();
    Serial.print("Connected with IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();

    // Set the callback for Google API access token generation status (for debug only)
    GSheet.setTokenCallback(tokenStatusCallback);

    // Set the seconds to refresh the auth token before expire (60 to 3540, default is 300 seconds)
    GSheet.setPrerefreshSeconds(10 * 60);

    // Begin the access token generation for Google API authentication
    GSheet.begin(CLIENT_EMAIL, PROJECT_ID, PRIVATE_KEY);
    
}

void loop() {
  
 // Call ready() repeatedly in loop for authentication checking and processing
    bool ready = GSheet.ready();

    if (ready && millis() - lastTime > timerDelay){
        lastTime = millis();

        FirebaseJson response;

        Serial.println("\nAppend spreadsheet values...");
        Serial.println("----------------------------");

        FirebaseJson valueRange;

// Sensors
        int temp = temperature.readTemperatureC();
        int hum = analogRead(7);
        int light = analogRead(3);
        // Get timestamp
        epochTime = getTime();

        valueRange.add("majorDimension", "COLUMNS");
        valueRange.set("values/[0]/[0]", epochTime);
        valueRange.set("values/[1]/[0]", temp);
        valueRange.set("values/[2]/[0]", hum);
        valueRange.set("values/[3]/[0]", light);

// For Google Sheet API ref doc, go to https://developers.google.com/sheets/api/reference/rest/v4/spreadsheets.values/append
        // Append values to the spreadsheet
        bool success = GSheet.values.append(&response /* returned response */, spreadsheetId /* spreadsheet Id to append */, "Full1!A1" /* range to append */, &valueRange /* data range to append */);
        if (success){
            response.toString(Serial, true);
            valueRange.clear();
        }
        else{
            Serial.println(GSheet.errorReason());
        }
        Serial.println();
        Serial.println(ESP.getFreeHeap());
    }
}

void tokenStatusCallback(TokenInfo info){
    if (info.status == token_status_error){
        GSheet.printf("Token info: type = %s, status = %s\n", GSheet.getTokenType(info).c_str(), GSheet.getTokenStatus(info).c_str());
        GSheet.printf("Token error: %s\n", GSheet.getTokenError(info).c_str());
    }
    else{
        GSheet.printf("Token info: type = %s, status = %s\n", GSheet.getTokenType(info).c_str(), GSheet.getTokenStatus(info).c_str());
    }
}
