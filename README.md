# Arduino-based-Multi-function-robotic-car
![image](https://user-images.githubusercontent.com/19898602/135789633-ed66b899-1676-42b5-8b1e-4739b9391dc4.png)

This is a Multifunction mobile operated arduino based robotic car

Hello friends recently I have built this amazing all in one Multifunction robotic car using arduino
This car is build using a custom-made PCB with SMT service of [JLCPCB](https://jlcpcb.com/IAT )
This robotic cars is feature loaded some of its features are mention below

1> It have obstacle avoiding feature

2> It have line following function

3> It can be controlled from android app



## VIDEO OF THE ROBOTIC CAR IN ACTION ##

[![](https://img.youtube.com/vi/R9FUyvKBm8k/0.jpg)](https://www.youtube.com/watch?v=R9FUyvKBm8k)


## COMPONENT LIST  ##

> custom PCB

> TCRT5000 IR Sensor

> Micro gear motor

> HC-05 BT module

> HC SR04 Ultrasonic sensor

> Arduino nano

> 350mah 11.5V 3cell lipo battery

> Joystick Bluetooth commander android app.


## OBSTACLE AVOIDING FEATURE ##
![MVI_0035 00_09_02_24 Still001](https://user-images.githubusercontent.com/19898602/122679393-45598c80-d208-11eb-9199-8da44a757bf0.jpg)

As you can see in the above image I have used a HC-SR04 ultrasonic sensor for object detection.
This feature is like car avoid if any obstacle came in front of the car, for this function 
I have used a HC-SR04 ultrasonic sensor this sensor sense the object in front of the car
and send signals to arduino to change the direction of the car.
This is the link of sensor if you need to buy https://amzn.to/3chmNU0

## LINE FOLLOWING FEATURE ##
![Untitled-2](https://user-images.githubusercontent.com/19898602/122679586-1b549a00-d209-11eb-8a5a-b36575c1212a.jpg)

Here I creat an array of IR sensors there are total of 5 nos of IR sensors.
This feature is like our robotic car will follow a line either black or white.
for this purpose I have used some IR sensors which detect the black and white color 
and signals to Arduino, then arduion work on a PID formula and command the motors to 
Follow the line 
This are the links of IR Sensors if you need to buy https://amzn.to/3uOAeBm

## MOBILE CONTROLLED FEATURE ##
![MVI_0035 00_09_15_08 Still003](https://user-images.githubusercontent.com/19898602/122679707-869e6c00-d209-11eb-8391-031cca4384f4.jpg)

This feature is like controlling robotic car with android app. 
you can control your car with a mobile app this robotic car is connect with 
android app with HC-05 Bluetooth module
This is the link of Bluetooth module if you need to buy https://amzn.to/34MzhyJ


##  MOTORS  ##
![MVI_0035 00_02_35_19 Still004](https://user-images.githubusercontent.com/19898602/122679883-455a8c00-d20a-11eb-8ec4-d93c0ba543a7.jpg)

For this project I have used two micro N20 Gear motors. 
this motors have quite high torque and low RPM which is 
exactly suits to our requirement 
this small motor are only rated 5V so it is also simple to handle its power consumption
this DC motor is run on L293D Driver IC
This is the link of N20 Gear motor if you need to buy https://amzn.to/3ifPbJQ


## LIPO BATTERY  ##
![MVI_0035 00_09_42_11 Still005](https://user-images.githubusercontent.com/19898602/122679953-a1bdab80-d20a-11eb-8232-414d6cad9e64.jpg)

I have used 350mAH lipo battery which is quite sufficient for our need
I always prefer to use Lipo battery because it have high ampere discharge characteristic
means you never observe less power delivery as battery drain
This is the link of N20 Gear motor if you need to buy https://amzn.to/3ifPbJ









## CIRCUIT DIAGRAM  ##

![Schematic_multifunction_2021-06-20](https://user-images.githubusercontent.com/19898602/122680003-da5d8500-d20a-11eb-9c05-8e678176f901.png)

This is the circuit drawing of the PCB here you can see I have connected IR sensor output to the LM358
LM358 is op-amp IC it will amplify the signal from IR sensor and send it to Arduino as a digital input
when the input from IR reach above the threshold value.
And this threshold value will be set by rotating that small 10K pots, in short this small trimmers 
can adjust the sensitivity of the IR sensors 

To control DC motors here I have used L293D SMD IC, this is dual H-bridge IC.
This IC is capable to run 2 DC motor of upto 12V 1amp in both directions.
It need 4 signals from Arduino like motor 1 Forward & reverse and motor 2 Forward & reverse


## CUSTOM MADE PCB  ##


![MVI_0035 00_00_54_04 Still006](https://user-images.githubusercontent.com/19898602/122680046-1395f500-d20b-11eb-8e64-093b111e5be5.jpg)
![MVI_0035 00_01_07_10 Still007](https://user-images.githubusercontent.com/19898602/122680420-ab481300-d20c-11eb-93a2-bcd364b56aac.jpg)
![MVI_0035 00_02_00_14 Still008](https://user-images.githubusercontent.com/19898602/122680421-ad11d680-d20c-11eb-8310-a151e6753a1e.jpg)
![MVI_0035 00_02_14_19 Still009](https://user-images.githubusercontent.com/19898602/122680422-adaa6d00-d20c-11eb-99fb-3357d8b65d0d.jpg)
![MVI_0035 00_02_29_00 Still010](https://user-images.githubusercontent.com/19898602/122680423-ae430380-d20c-11eb-8c1e-f7be7119537a.jpg)


First of all here is the link of schematic of this project

https://easyeda.com/editor#id=83c4ed4101c84bb68950179a24ab4322




PCB is the heart of this project, I have design like all the components must be surface mount on PCB
so there is a big challenge is in front of me how to manage to buy different different components 
on my own. it quite difficult to get them all in time.
so i came to know about PCB + SMT service of [JLCPCB.com](https://jlcpcb.com/IAT) like [JLCPCB.com](https://jlcpcb.com/IAT) offering complete PCB with components 
solder on it. they have huge collection of components to choose from. 
this was so much help full for me it save my lots of time and money by using PCB + SMT service of [JLCPCB.com](https://jlcpcb.com/IAT)
JLCPCB have some Special offer: $2 for 1-4 Layer PCBs, free SMT assembly monthly
 

![Arduino remote control and OTA via ESP8266 and Vcon io_1](https://user-images.githubusercontent.com/19898602/135789676-a069db96-5fbe-42dd-9826-67a55b738fe9.gif)


