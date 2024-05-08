#    Nature patterns: Secret Languages III
*By [Anthuanet Falcon](https://anthuanetf.github.io/MDEF/) & [Albert Vila](https://avilabon.github.io/MDEF_Albert/)* :)

# Microchallenge 3: Dr. Chladni
![Initial diagram](recursosMicrochallenge3/images/DiagramaInicial.JPG)

## 1. Introduction 


## 2. Our proposal for microchallenge 3

The aim of this microchallenge is to 

### Planning


## 3. The inputs

### 3.1. The soil humidity

The Keystudio Moisture Sensor
![Keystudio Moisture Sensor](recursosMicrochallenge3/images/KeyStudioMoistureSensor.jpg)

[Key Studio Moisture Sensor Datasheet](https://wiki.keyestudio.com/Ks0049_keyestudio_Soil_Humidity_Sensor
)[Key Studio Moisture Sensor Datasheet](https://wiki.keyestudio.com/Ks0049_keyestudio_Soil_Humidity_Sensor
)

Basic connection
![Keystudio Moisture Sensor](recursosMicrochallenge3/images/KeyStudioMoistureSensorBasicConnetion.jpg)

```
    /*
    # Example code for the moisture sensor
    # Connect the sensor to the A0(Analog 0) pin on the Arduino board
    # the sensor value description
    # 0  ~300     dry soil
    # 300~700     humid soil
    # 700~950     in water

    */
    void setup(){
    
    Serial.begin(57600);
    } 
    void loop(){
    Serial.print("Moisture Sensor Value:");
    Serial.println(analogRead(0)); 
    delay(100);
    }
```

## 4. The processing

## 5. The outputs


## 6. Tools and materials:

### Software:
- Rhino
- Ultimaker Cura
- Adobe Illustrator
- Trotec sw
- Audacity
- NCH Tone Generator (free trial)
- Notion
- Github
- The teacheable machine

### Digital fabrication machines:

| Name | Use |
| --- | --- |
| 3D printer Creality Ender-3 PRO | Transmission cylinder and  Dr. Chladni electronics box |
| Raptor Milling machine | Plywood transmission guide |

### Power and hand tools:
| Name | Use |
| --- | --- |
| Column drill and bits | Make holes in metal plates |
| Miter machine | Plywood cutting |
| Angle grinder | Polish metal burrs |
| Soft solder |  |
| Files, rasp, sanding paper | Wires |
| Wrench | Ensamble chladni plate |

### Hardware:
- Webcam
- Personal computers
- Cell phones

## 7. Iteration process



## 8. Conclusions and new ideas

1. 
2. 


## 9. References and inspirations

- [NDVI with a conventional camera](https://www.unex.es/organizacion/servicios-universitarios/servicios/comunicacion/archivo/2021/mayo-de-2021/3-de-mayo-de-2021/una-tecnica-desarrollada-en-la-uex-permite-medir-la-actividad-fotosintetica-de-las-plantas-utilizando-una-camara-fotografica-convencional)

- [Key Studio Moisture Sensor Datasheet](https://wiki.keyestudio.com/Ks0049_keyestudio_Soil_Humidity_Sensor
)
## Thanks to microchallenge supporting team and to the classmates!!!!!!!!!!


