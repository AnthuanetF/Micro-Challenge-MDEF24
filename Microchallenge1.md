#    Nature patterns: Secret Languages
*By [Anthuanet Falcon](https://anthuanetf.github.io/MDEF/) & [Albert Vila](https://avilabon.github.io/MDEF_Albert/)* :)

![Nature patterns](/recursosMicrochallenge/images/NaturePatterns.png)

## Frequency events _ exp1 (16/02/24)

This is the documentation of our exploration and reflection on our first micro challenge, based on our inspiration drawn from Albert and Anthu. It is rooted in the search for new ways to understand the languages of nature and its expression within the environment.


### Project aligment

During the initial phase of getting to know each other and brainstorming we found many shared interests. We decided to take our time in this initial phase as it was important to bring out future learning interests as well as the essential elements of our design space to see where we would both feel most comfortable. It was also important to see how the development of the challenge was going to contribute and enrich the respective final personal projects. This time was worth it as we designed a more ambitious project to work on beyond the first challenge. We both felt comfortable working and we learned a lot of things.

![Shared interests](/recursosMicrochallenge/images/SharedInterests.JPG)

### Conception phase

Original idea: "Create a system for the capture, representation and interpretation of languages ​​of nature".

Original goal: "Make natural patterns not consciously perceptible by humans apparent to improve our relationship with nature by creating a shared language."

This idea emerges from the fusion of perspectives within the scientific, artistic, and technological realms, challenging current methods of research and exploration in the natural world. Our inspiration and curiosity to delve into the natural language through observation led us to understand that the language of our environment is often imperceptible to our human species. The reasons extend beyond the anthropocentric mindset and include physiological factors.

**Patterns Visible and Invisible**

When we speak of the languages of nature, we refer to the fusion of the visible and the invisible. Among natural patterns, we highlight fractals, spirals, tessellations, and symmetrical shapes commonly observed in leaves, shells, animal skins, and geological formations. These are shaped by languages invisible to humans, such as frequencies, waves, vibrations, microwaves, energy, heat, etc.


**Artifact description**

Create a system capable of capturing different data from the nature (sound, image, frequency, vibrations...) and physically represent it in patterns that in turn feed back to the system (ai)

**First sketch**

![Original sketch](/recursosMicrochallenge/images/OriginalSketch.png)

**Final flowchart of the whole project**

![Debbuged sketch](/recursosMicrochallenge/images/Microchallenge.JPG)


# Microchallenge 1: It is possible to see the frecuencies and vibrations?

## Introduction 
In this initial exploration, we chose to focus on vibrations and frequencies, drawing inspiration from the study of Cymatics* through the Chladni plate. 
 
**Cymatics is the science that studies the graphic representation of sound, and it emerged by attributing a creative meaning to sound.*

| Who is Ernest Chladni? |              |
| --- | --- |
| He was a German physicist known for his work on vibrations and the calculation of the speed of sound for different gases, and is considered the founder of acoustics. The geometric patterns that appear formed by fine layers of sand deposited on a glass or metal plate that is vibrated at different frequencies are called 'Chladni sound figures.| ![Ernest Chadni](/recursosMicrochallenge/images/ErnestChladni.png) |


#### Initial References : Links, papers, videos....

One of our initial references is the artist *Nigel John Stanford*, who explores Cymatics by creating interactive systems between vibrations, percussion instruments, frequencies, etc., and various elements such as water, salt, sand, and fire.

![Water patterns](/recursosMicrochallenge/images/agua.png)

![Nigel John Stanford](/recursosMicrochallenge/images/Nigel.png)


- https://nigelstanford.com/Cymatics/?s=youtube&p=Cytext

 We also explored various ways to create our own Chladni plate, starting from low-tech, which was our initial intention, and later incorporating electronic elements. Here are our reference, Make you own Chladni Plate! 
 
#### Links:
- https://www.youtube.com/watch?v=hKmPc0Q0kKg
- https://demos.smu.ca/index.php/demos/waves/104-chladni-patterns
- https://americanhistory.si.edu/science/chladni.htm
- https://sciencedemonstrations.fas.harvard.edu/presentations/chladni-plates  
- https://j-rosas.github.io/mdef/project/project/
- https://skullsinthestars.com/2013/05/02/-physics-demonstrations-chladni-patterns/

<iframe width="100%" height="400" src="https://www.youtube.com/embed/wvJAgrUBF4w?si=q4oz089cM_jk_HJo" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>


## Propose (What is supposed to do or not to do in this 1st Micro challenge)

During this stage, our goal is to create a data set of sounds to experiment with different frequencies. Subsequently, through our mentioned electronics, we aim to transfer these sounds/vibrations to our output systems (Chladni plate...), allowing us to analogically visualize the patterns that are generated when using different materials (water, seeds...)

This exploration holds aspirations to further develop in the upcoming challenge, incorporating ideas involving machine learning and the exploration of additional elements.


Coverage of the first microchallenge in the global project:
![Micro-Challenge 1 Coverage](/recursosMicrochallenge/images/Microchallenge1_flowchart.JPG)




### Planning
![Planning](/recursosMicrochallenge/images/Planning.png)

### Logbook (What we did, day by day)

| Day 1 | Day 2 | Day 3 | Day 4 |
| --- | --- |--- | --- |
| Share interests - Design project - Assign priorities for microchallenge 1 - Start gathering materials | Design output 1, the Chladni Plate - Built output 1 - Documentation (videos, photos, notes) | Electronics of the system to run output 1 - Work on inputs - Test output 1 - Improve output 1 - Built and test output 2 - Improve electronics- Documentation | Improve inputs - Improve electronics - Test output 1 - Create output 3 - Test output 3 - Improve output 3 - Documentation |


## Elements of the artifact

![Debbuged sketch](/recursosMicrochallenge/images/ElementsArtifact.JPG)

## Artifact elements 1: Inputs

Due to the time limitation to execute the project we have decided to focus on the outputs using our own inputs so we have left the data capture and the feedback system for another challenges.

After some tests with music and different type of sound we decided to download some pure frequencies and create tracks of 1 minute each. We used the https://onlinetonegenerator.com/ to create pure sine frequencies of the desired frequencies. 

Since the tracks downloaded from onlinegenerator.com are 15 seconds long, we used the Audacity software to create 60-second tracks.

![Working on inputs](/recursosMicrochallenge/images/generatingSoundTracks.png)

After some tests with the balloon-speaker we added some low frequencies (10 Hz, 20 Hz, 40 Hz, and 50 Hz) tto those we had found in the bibliography for the squared Chladni plate paterns (68 Hz,80 Hz, 176 Hz, 250 Hz, 300 Hz), 382 Hz, 477 Hz, 735 Hz, 1071 Hz, 2250 Hz and 3258 Hz)

[Download tracks](/recursosMicrochallenge/documents/InputFreq.zip)

## Artifact elements 2: Processing system

### Electronics for testing our input frequencies and send it to the vibration outputs

For provide the sound/vibrations to our different outputs we have used a DF Player that is a module that provides a integrated MP3 player with a miniSD card

![DFPlayer](/recursosMicrochallenge/images/DFPlayerMini_DataSheet.png)


DF Player datasheet: [https://github.com/RalphBacon/MP3-Player-DFPlayer/blob/master/DFPlayer Mini Manual.pdf](https://github.com/RalphBacon/MP3-Player-DFPlayer/blob/master/DFPlayer%20Mini%20Manual.pdf)

The configuration we used the following diagram that works without any coding.

#### The circuit
![DFPlayer Circuit](/recursosMicrochallenge/images/DfPlayerCircuit.png)

To facilitate testing, connections and disconnections of the different outputs, we soldered some 3.5 jacks to the output of the circuit and to the input of the speakers.


## Artifact elements 2: Outputs

In order to explore diferent visualizations and the limits of each one we have worked in 3 different outputs. The Chladni plate (output 1), a laser balloon (output 2) and a vibrating ballon membrane (output 3). After the first iterations and test with the Chladni plate we decided to made some variations.

### Output 1: Chladni plate

![Chladni plate](/recursosMicrochallenge/images/ChladniPlateInstallation.png)

Based on:
[Weekend Projects by Make: makezine.com. Visualizing Sound with a Chladni Plate](https://www.youtube.com/watch?v=hKmPc0Q0kKg)

![Chladni plate parts](/recursosMicrochallenge/images/ChladniPlateParts.JPG)


Download files:
- [Download plywood base file](/recursosMicrochallenge/documents/ChladniPlateMarkPlywoodBase.dxf)
- [Download plywood base file](/recursosMicrochallenge/documents/ChladniPlateAcrylycGuidePlate.dxf)
- [Download 3D transmission cylinder](/recursosMicrochallenge/documents/ChladniPlateMarkPlywoodBase.dxf)


### Testing materials with Chladni plate

![Testing materials](/recursosMicrochallenge/images/TestingMaterials.JPG)

Chia test:
https://youtube.com/shorts/J9iZFGCwMyE?si=WQfpxST9LSwg6h7_

Water test
https://youtube.com/shorts/H6Db8r2LYrQ?si=xwOUFDiAWokbY-sZ


After many tests, we can say that our Chladni dish could not create the expected patterns. After different tests with materials and with different types of plates, we see that the vibration transmission must be improved in some way. Maybe increasing the power with an amplifier or rebuilding the mechanical transmission system.

## OUTPUT 2: Vibrating balloon

Coming soon
![image](https://hackmd.io/_uploads/SyDfUlToa.png)

![image](https://hackmd.io/_uploads/BJ7VYeTjp.png)

<iframe width="100%" height="400px" src="https://www.youtube.com/embed/piy7QXYmkRE?si=SlqT0uQj8C8COIzP" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<iframe width="100%" height="400px" src="https://www.youtube.com/embed/LXKKkXhzJP8?si=zKxgiYKDFa0LpzoQ" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>
    
## Output 3: Laser ballon


<iframe width="100%" height="400" src="https://www.youtube.com/embed/ce1N9NUwVu0?si=L4jgd1y0QbyMCqRm" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

## Tools and materials:

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

![image](/recursosMicrochallenge/images/FabLabWorkshop.png)

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


## Iteration process
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


## Conclusions and new ideas

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


