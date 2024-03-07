#    Nature patterns: Secret Languages
*By [Anthuanet Falcon](https://anthuanetf.github.io/MDEF/) & [Albert Vila](https://avilabon.github.io/MDEF_Albert/)* :)

# Microchallenge 2: Frequencies to images 

## 1. Introduction 

#### References and Inspirations

## 2. Our proposal for microchallenge 2

??? 'quote' Microchallenge 1 proposal'
    During this stage, our goal is to create a data set of sounds to experiment with different frequencies. Subsequently, through our mentioned electronics, we aim to transfer these sounds/vibrations to our output systems (Chladni plate...), allowing us to analogically visualize the patterns that are generated when using different materials (water, seeds...)

This exploration holds aspirations to further develop in the upcoming challenge, incorporating ideas involving machine learning and the exploration of additional elements.

The objective for this microchallenge is to take Microchallenge 1 one step further (see microchallenge 1).

The first step was to fix the Chladni Plate that we built during Microchallenge 1 since it was not going well. Thanks to previous experience and especially past mistakes, we have completely rebuilt the Chladni Plate but this time much faster.


Coverage of the first microchallenge in the global project:
![Micro-Challenge 1 Coverage](/recursosMicrochallenge/images/Microchallenge1_flowchart.JPG)


### Planning
![Planning](/recursosMicrochallenge/images/Planning.png)



## 3. Elements of the artifact

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

In order to explore diferent visualizations and the limits of each one we have worked in 3 different outputs. The Chladni plate (output 1), a laser balloon (output 2) and a vibrating ballon membrane (output 3). After the first iterations and test with the Chladni plate we decided to made some variations.

### Output 1: Chladni plate

![Chladni plate](/recursosMicrochallenge/images/ChladniPlateInstallation.png)

Based on:
[Weekend Projects by Make: makezine.com. Visualizing Sound with a Chladni Plate](https://www.youtube.com/watch?v=hKmPc0Q0kKg)

![Chladni plate parts](/recursosMicrochallenge/images/ChladniPlateParts.JPG)

Files:
- [Download plywood base file](/recursosMicrochallenge/documents/ChladniPlateMarkPlywoodBase.dxf)
- [Download acrylin guide plate file](/recursosMicrochallenge/documents/ChladniPlateAcrylycGuidePlate.dxf)
- [Download 3D transmission cylinder](/recursosMicrochallenge/documents/TransmissionCylinder.3dm)

![TransmissionCylinder](/recursosMicrochallenge/images/TransmissionCylinderCompo.JPG)



### Testing materials with Chladni plate

![Testing](/recursosMicrochallenge/images/Testing.JPG)

![Testing materials](/recursosMicrochallenge/images/TestingMaterials.JPG)

Chia test:
https://youtube.com/shorts/J9iZFGCwMyE?si=WQfpxST9LSwg6h7_

Water test
https://youtube.com/shorts/H6Db8r2LYrQ?si=xwOUFDiAWokbY-sZ


After many tests, we can say that our Chladni dish could not create the expected patterns. After different tests with materials and with different types of plates, we see that the vibration transmission must be improved in some way. Maybe increasing the power with an amplifier or rebuilding the mechanical transmission system.

## Output 2: Vibrating balloon

After our unexpected results with the patterns on the Chladni plate we decided to directly put a membrane, made with a balloon, on a speaker and test the behavior of the materials on it.

![Vibrating balloon](/recursosMicrochallenge/images/VibratingSpeakerBalloon.png)

To build it, just cut a balloon and place it tightly over a speaker.

![Vibrating balloon](/recursosMicrochallenge/images/Curcuma.png)

This time the results surprised us when we checked the response of the materials and the behavior of the membrane at different frequencies.


[![TestingVibratingBalloon](/recursosMicrochallenge/images/YoutubeCurcuma.JPG)](https://www.youtube.com/watch?v=piy7QXYmkRE)


[![TestingVibratingBalloon2](/recursosMicrochallenge/images/YoutubeChia.JPG)](https://www.youtube.com/watch?v=LXKKkXhzJP8&t)

    
## Output 3: Laser balloon

![Laser balloon](/recursosMicrochallenge/images/LaserBalloonTest2.jpg)


Another easy way to see the sound is by projecting a laser onto the wall bounced by a mirror attached to a membrane (balloon) in front of a sound source (speaker). We did a quick test but didn't delve too deeply into this output.


[![Laser balloon](/recursosMicrochallenge/images/YoutubeLaser.JPG)](https://www.youtube.com/watch?v=ce1N9NUwVu0&t)

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
| 3D printer Creality Ender-3 PRO | Transmission cylinder |
| Rayjet 500 laser machine | Marking holes and cutting lines of the plywood base and cut acrylic guide plate |

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


## 5. Logbook (What we did, day by day)

| Day 1 | Day 2 | Day 3 | Day 4 |
| --- | --- |--- | --- |
| Share interests - Design project - Assign priorities for microchallenge 1 - Start gathering materials | Design output 1, the Chladni Plate - Built output 1 - Documentation (videos, photos, notes) | Electronics of the system to run output 1 - Work on inputs - Test output 1 - Improve output 1 - Built and test output 2 - Improve electronics- Documentation | Improve inputs - Improve electronics - Test output 1 - Create output 3 - Test output 3 - Improve output 3 - Documentation |


## 6. Iteration process
- Imagine
- Smell
- Read
- Create
- Fail
- Fail again
- Take photos
- Read
- Imagine
- Ask for help
- ouch!
- Smell
- Try
- Fail F@#$%&/!
- Smell Anthu
- Take pictures
- Document
- Fail xxxxxxxx
- No pictures
- Don't touch we have something
- Reimagine
- Where is every body!
- uh our classmate are so cool!
- finish thiis! 
- Presentation in 5 minutes. Shit! Documenting!
- Repository? jooo
- Clap Clap 


## 7. Applications

After some experimentation, despite not obtaining optimal results, we come up with a multitude of possible applications of our learnings during the process.

![Aplications](/recursosMicrochallenge/images/Applications.JPG)

## 8. Conclusions and new ideas

1. This is just the beginning​!
2. It is worth taking your time to the alignment phase as it will influence the future of the entire project.
 
2. Our intentions were ambitious, such as merging vibrations with water and laser.
3. We want to begin interpreting the patterns in the next challenges
4. When using sensors, interfaces or artifacts to translate signals the very nature, composition and shape of this “devices” affects the initial signal.
5. We want to explore more with Water and Bio materials as well. 
6. This type of micro challenges is a good way to learn but a little stressful.
7. We want still Explorer this systems and add more ideas , so see u in the second Challenge!!
8. Hopefully that we can communicate with another "Living beings" using our system.(lol) :)))))))))
9. I like work with Albert 
10. I like work with Anthu



### Thanks to microchallenge supporting team and to the classemates, especially Flora and Manuja for the annoying sounds!!!!!!!!!!


