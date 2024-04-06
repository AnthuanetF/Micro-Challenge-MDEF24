#    Nature patterns: Secret Languages II
*By [Anthuanet Falcon](https://anthuanetf.github.io/MDEF/) & [Albert Vila](https://avilabon.github.io/MDEF_Albert/)* :)

# Microchallenge 2: Dr. Chladni

## 1. Introduction 

![DrChladniIntro](/recursosMicrochallenge2/images/PortadaDrChladni.gif)

This microchallenge is an improvement and evolution of [microchallenge 1](https://github.com/AnthuanetF/Micro-Challenge-MDEF24/blob/main/Microchallenge1.md). 


## 2. Our proposal for microchallenge 2

The aim of this microchallenge is to go one step further than Microchallenge 1 by incorporating artificial intelligence into the frequency-pattern system with (machine learning) and also a first exploration of new inputs such as the frequencies or rhythms of the human body such as the heart rate. 

The microchallenge 2 has two different parts, the first part is closing the loop between frequencies and patterns by training a recognition system with AI that is capable of given a pattern, assigning it a frequency.

![Micro-Challenge 2 Coverage - Part 1](/recursosMicrochallenge2/images/Loop1PlanningMC2.JPG)

The second part consists of creating a sensor capable of counting heart rate and, through a mapping of values between a reference table of health states by heart rate, assigning it a frequency and analogically building a visual pattern like a new form of diagnosis.

![Micro-Challenge 2 Coverage - Part 1](/recursosMicrochallenge2/images/Loop2PlanningMC2.JPG)


To be able to carry out everything planned for this challenge, the first step was to fix the Chladni Plate to improve performance. Thanks to previous experience and especially past mistakes, we have completely rebuilt the Chladni Plate but this time much faster.


### Planning
![Planning](/recursosMicrochallenge2/images/Planning.JPG)

#### References

[Teacheable machine](https://teachablemachine.withgoogle.com/)

## 3. The artifact

![Debbuged sketch](/recursosMicrochallenge/images/ElementsArtifact.JPG)

## 3.1. Artifact elements 1: Inputs

Due to the time limitation to execute the project we have decided to focus on the outputs using our own inputs so we have left the data capture and the feedback system for another challenges.

After some tests with music and different type of sound we decided to download some pure frequencies and create tracks of 1 minute each. We used the https://onlinetonegenerator.com/ to create pure sine frequencies of the desired frequencies. 

Since the tracks downloaded from onlinegenerator.com are 15 seconds long, we used the Audacity software to create 60-second tracks.

![Working on inputs](/recursosMicrochallenge/images/generatingSoundTracks.png)

After some tests with the balloon-speaker we added some low frequencies (10 Hz, 20 Hz, 40 Hz, and 50 Hz) tto those we had found in the bibliography for the squared Chladni plate paterns (68 Hz,80 Hz, 176 Hz, 250 Hz, 300 Hz), 382 Hz, 477 Hz, 735 Hz, 1071 Hz, 2250 Hz and 3258 Hz)

[Download tracks](/recursosMicrochallenge/documents/InputFreq.zip)

## 3.2. Artifact elements 2: Processing system

### Electronics for testing our input frequencies and send it to the vibration outputs

For provide the sound/vibrations to our different outputs we have used a DF Player that is a module that provides a integrated MP3 player with a miniSD card

![Our Circuit](/recursosMicrochallenge/images/electronics.JPG)

![DFPlayer](/recursosMicrochallenge/images/DFPlayerMini_DataSheet.png)


DF Player datasheet: [https://github.com/RalphBacon/MP3-Player-DFPlayer/blob/master/DFPlayer Mini Manual.pdf](https://github.com/RalphBacon/MP3-Player-DFPlayer/blob/master/DFPlayer%20Mini%20Manual.pdf)

The configuration we used the following diagram that works without any coding.

#### The circuit
![DFPlayer Circuit](/recursosMicrochallenge/images/DfPlayerCircuit.png)

To facilitate testing, connections and disconnections of the different outputs, we soldered some 3.5 jacks to the output of the circuit and to the input of the speakers.

![working on electronics](/recursosMicrochallenge/images/electronicscomp.JPG)

## 3.3. Artifact elements 2: Outputs

### Output 1: Chladni plate 2.0.

![Chladni plate2]Image
Fofo del nou Chladni Plate

Files:
- [Download plywood guide 2.0](/recursosMicrochallenge/documents/ChladniPlateMarkPlywoodBase.dxf)

- [Download 3D transmission cylinder 2.0](/recursosMicrochallenge/documents/TransmissionCylinder.3dm)



### Training a model using a Chladni plate patterns



#### References:
https://www.instructables.com/Laser-Pen-Sound-Visualiser/

## 4. Tools and materials:

### Software:

- Rhino
- Ultimaker Cura
- Adobe Illustrator
- Trotec sw
- Audacity
- Online Tone Generator
- Notion
- Github

### Digital fabrication machines:
 Name | Use |
| --- | --- |
| 3D printer Creality Ender-3 PRO | Transmission cylinder, Dr. Chladni electronics box |
| CNC Milling machine | Plywood guide plate |

### Power and hand tools:
| Name | Use |
| --- | --- |
| Column drill and bits | Make holes in metal plates |
| Miter machine | Plywood cutting |
| Angle grinder | Polish metal burrs |
| Soft solder |  |
| Files, rasp, sanding paper | Wires |
| Wrench | Ensamble chladni plate |

![Workshop](/recursosMicrochallenge/images/FabLabWorkshop.png)

### Materials:
| Name | Use |
| --- | --- |
| PLA | Chladni plate |
| Plywood 10mm | Chladni plate |
| Acrylic 4mm | Chladni plate |
| Threaded rod 5M | Chladni plate |
| Screws, hex nuts, washers and o-rings 5M| Chladni plate |
| Aluminiun sheet 1mm | Chladni plate |
| Old speakers | Chladni plate, Speaker balloon, Laser visualitzer |
| Balloons | Speaker balloon, Laser visualitzer |
| Piece of mirrow | Laser visualitzer |
| Rubber pads | Chladni plate |
| Curcuma, salt, sugar, water, sea water | Materials for patterns over chladni plates or balloon |
| Aluminium plates | Tests with water |
| Wires, jumpers | Electronics vibration generator |
| Tin | Tin soldering |
| Black paint | Chladni plate |

### Documenting tools:
- Cell phone
- Computer
- Tablet
- Humans

### Electronic components:
- DFPlayer mini - [Datasheet](https://picaxe.com/docs/spe033.pdf)
- 2 buttons
- Wires
- 3,5 mm jacks males and females
- Laser diode 650nm Adafruit - [Datasheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/1130/1054_Web.pdf)


### Provisional code:

```
//Define DFPlayer libraries
#include "Arduino.h"
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>
//SoftwareSerial mySerial(RX_PIN, TX_PIN);
SoftwareSerial mySerial(10, 11);  // RX, TX


// Create a SoftwareSerial object to communicate with the DFPlayer Mini

// Create a DFRobotDFPlayerMini object to control the DFPlayer Mini
DFRobotDFPlayerMini myDFPlayer;

//Define DFPlayer libraries
const int knockSensor = 1;  // the piezo is connected to analog pin 0
const int threshold = 100;  // threshold value to decide when the detected sound is a knock or not
int beat = 0;
int ppm = 0;

int startMillis;  //some global variables available anywhere in the program
int currentMillis;
const int period = 15000;  //the value is a number of milliseconds ()

// these variables will change:
int sensorReading = 0;  // variable to store the value read from the sensor pin

void setup() {
  //Serial.begin(9600);      // use the serial port
  startMillis = millis();  //initial start time

  // Initialize the DFPlayer Mini object
  if (!myDFPlayer.begin(mySerial)) {
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while (true)
      ;
  } else {
    Serial.println(F("DFPlayer Mini online."));
  }

  // Set the volume (0 to 30)
  myDFPlayer.volume(25);

  // Play track 001 from the SD card
  // myDFPlayer.play(1);
}


void loop() {

  currentMillis = millis();
  int timeElapsed = abs(currentMillis - startMillis);

  if (timeElapsed <= period) {
    // read the sensor and store it in the variable sensorReading:
    sensorReading = analogRead(knockSensor);

    // if the sensor reading is greater than the threshold:
    if (sensorReading >= threshold) {
      // send the string "Knock!" back to the computer, followed by newline
      beat = beat + 1;
      Serial.print("Total beat: ");
      delay(100);
      Serial.println(beat);
    }
    Serial.println(timeElapsed);
    delay(100);  // delay to avoid overloading the serial port buffer}
  } else {
    ppm = beat * 4;
    Serial.print("Pulsaciones por minuto: ");
    Serial.println(ppm);

    if (ppm < 60) {
      myDFPlayer.play(1); // k = (100.mp3);
    } else if ((ppm >= 60) && (ppm < 64)) {
      myDFPlayer.play(2);  // = (200.mp3);
    } else if ((ppm >= 64) && (ppm < 70)) {
      myDFPlayer.play(3);  // =(350.mp3);
    } else if ((ppm >= 70) && (ppm < 74)) {
      myDFPlayer.play(4);  // = (430.mp3);
    } else if ((ppm >= 74) && (ppm < 79)) {
      myDFPlayer.play(5);  //= (460.mp3);
    } else if ((ppm >= 79) && (ppm < 85)) {
      myDFPlayer.play(6);  // = (490.mp3);
    } else if ((ppm >= 85) && (ppm < 91)) {
      myDFPlayer.play(7); //= (800.mp3);
    } else if ((ppm >= 91) && (ppm < 100)) {
      myDFPlayer.play(8); //= (1000.mp3);
    } else if (ppm >= 100) {
      myDFPlayer.play(9); //= (1300.mp3);
    } else {
      Serial.println("There is an error! Reset the system!");
      //delay(150);
    }
  }
  //Serial.println("Reset me to go again!");
}
```


## 6. Iteration process



## 7. Applications. The performance

![The performance](../Micro-Challenge-MDEF24/recursosMicrochallenge2/images/DesignDialogII_DrChladniPerformance.JPG)


![The table](../Micro-Challenge-MDEF24/recursosMicrochallenge2/images/ClassesBPM.JPG)


## 8. Conclusions and new ideas

1. This is just the beginning​!



## 9. References

- [How to control your DFMini Player MP3 module with Arduino](https://www.dfrobot.com/blog-1462.html)

- [Run Teacheable Machine model in an microcontroller](https://github.com/googlecreativelab/teachablemachine-community/blob/master/snippets/markdown/tiny_image/GettingStarted.md)


### Thanks to microchallenge supporting team and to the classemates!!!!!!!!!!


