##  DESIGN OF LOAD SHARING OF TRANSFORMERS

### ABSTRACT

   Power failure is a short or long term loss of electric power to an area mostly caused by short circuit, damage to electric transmission line, over voltage, at power stations and more commonly failure due to overloading. The possible damage areas are effected by losing power. The one inherent problem with standard power sharing and monitoring units is their broadcast. 

   One has to be physically close to the alarm to hear it, otherwise he might not get notified in time to actually prevent overload. The microcontroller based load sharing and control system is a device that automatically controls overload on a generator by sharing power and cut off supply once the power consumption exceeds the amount of power supplied. The main aim of this project is to provide a non- interrupted   power supply to the energy consumers. By implementation of this scheme the problem of interruption due to overloading can be avoided.

### Hardware Implementation

In this project load is sharing among the transformers according to the load conditions. Normally the load is under balanced conditions. Whenever the heavy load occurs the load automatically switches to another transformer. For automatic sensing of load conditions current sensor is used.

#### Components Used:
•	Transformers
•	Bridge Rectifiers
•	Voltage Regulator
•	Current Sensor
•	Arduino Microcontroller
•	LCD Display
•	Relay
•	Resistors
•	Transistor
•	Diode
### BLOCK DIAGRAM
![BLOCK DIAGRAM](https://imgur.com/0GrINR8.png)
### CIRCUIT DIAGRAM
![CIRCUIT DIAGRAM](https://imgur.com/nHyogr9.png)
### Working:
In this project we use three Transformers.
The ratings of the transformers are

  Transformer 1: 12V,1A
        
  Transformer 2: 12V,750MA
        
  Transformer 3:12V,2A
  
Transformer 1 is used as the main transformer for providing supply to all the equipment. Transformer 2 is used for supplying low load and Transformer 3 is used for supplying high loads.
            Here we are using 230V AC as input. For converting 230V AC to 12V DC we are using bridge rectifiers. The output of a bridge rectifier is connected to voltage regulator for providing 5V DC supply to arduino microcontroller. We use a LCD display(16*2). It has 5 positive pins and 5 negative pins. But the microcontroller uses only one positive and one negative, so one bypass circuit is used for bypassing other positives and negatives.
            
  Whenever the low load is applied Transformer 2 is sufficient to meet the low load. Whenever the high load occurs the current sensor senses the high load and gives the signal to the relay then the current sensor senses the high load and gives the signal to the relay then the heavy load switched the Transformer 3. Heavy load mainly occurs due to increasing of voltage then the current drops.
              
In relay we use diode for unidirectional flow because when the heavy load occurs the load should be supplied by Transformer 3 only.
The flow of supply to the load through Transformer 2 should be restricted. The LCD display shows the condition of load i.e., whether the load is balanced or unbalanced and the current at every instant is displayed LCD.
### SIMULATION RESULTS
![output when load is balanced](https://imgur.com/DSXG32G.png) ![output when load is unbalanced](https://imgur.com/ZgHRwwk.png)
### CONCLUSION
This Project work provides an efficient way for load sharing and control at real time. The efficient sharing of transformers can be done by using Arduino microcontroller, current sensor and relay. The Arduino microcontroller is programmed such that whenever the high load occurs then the current sensor senses that load and trips the relay and switches the overload to the other transformer.

   This Project is the small model of this type of application which is widely used in industrial applications. To avoid damage to the equipment which are used in industries, and to obtain reliability this type of models are preferred. By using this type of models in various industries efficiency of the system increases. Even though its intimal investment is costly by extending this project to various applications we can have more benefits.
   ### REFERENCES
   
•	https://www.arduino.cc/en/Guide/Introduction

•	https://www.arduino.cc/en/Reference/HomePage

•	https://en.wikipedia.org/

•	Electrical Machines by D P Kotari

