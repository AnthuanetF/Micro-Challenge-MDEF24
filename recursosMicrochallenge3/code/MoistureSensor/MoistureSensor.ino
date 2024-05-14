#define SENSOR_PIN A0 // Analog pin for the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read sensor value
  int sensorValue = analogRead(SENSOR_PIN);
  
  // Convert analog value to voltage (assuming 5V reference voltage)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Convert voltage to sensor measurements
  // Assuming sensor outputs: water content (0-50%), EC (0-3 dS/m), temperature (-40 to 60 °C)
  float waterContent = map(voltage, 0.36, 2.0, 0, 50); // Adjust the mapping values based on your sensor's calibration
  float ec = map(voltage, 0.36, 2.0, 0, 3); // Adjust the mapping values based on your sensor's calibration
  float temperature = map(voltage, 0.36, 2.0, -40, 60); // Adjust the mapping values based on your sensor's calibration
  #define SENSOR_PIN A0 // Analog pin for the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the sensor value
  int sensorValue = analogRead(SENSOR_PIN);
  // Assuming a 5V reference and scaling up the voltage by 10x if needed
  float voltage = sensorValue * (5.0 / 1023.0) * 10;

  // Print raw sensor value and calculated voltage for debugging
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  Serial.print("Voltage: ");
  Serial.println(voltage, 4); // Print voltage with four decimal places for accuracy

  // Calculate the water content, electrical conductivity, and temperature from the voltage
  float waterContent = calculateWaterContent(voltage);
  float ec = calculateEC(voltage);
  float temperature = calculateTemperature(voltage);

  // Print calculated values for water content, electrical conductivity, and temperature
  Serial.print("Water Content: ");
  Serial.print(waterContent);
  Serial.println("%");
  Serial.print("Electrical Conductivity: ");
  Serial.print(ec);
  Serial.println(" dS/m");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Delay for 1 second before the next loop iteration for stability
  delay(1000);
}

// Function to calculate water content based on voltage
float calculateWaterContent(float voltage) {
  // Example calibration, assuming maximum sensor voltage of 1.5V corresponds to 100% moisture
  return (voltage / 1.5) * 100;
}

// Function to calculate electrical conductivity based on voltage
float calculateEC(float voltage) {
  // Example calibration, assuming maximum sensor voltage of 1.5V corresponds to 3 dS/m
  return (voltage / 1.5) * 3;
}

// Function to calculate temperature based on voltage
float calculateTemperature(float voltage) {
  // Adjust this calibration based on empirical data
  if (voltage >= 0.1) {
    // Assuming 0.1 V corresponds to 20°C and 2.0 V corresponds to 50°C
    // This maps 0.1 V to 20°C and scales up to 50°C at 2.0 V
    return (voltage - 0.1) * (30.0 / (1.9)) + 20;
  }
  // Return a default low value if voltage is below 0.1 V
  return -40;
}