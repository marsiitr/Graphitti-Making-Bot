# The Graffiti Bot
   
## Abstract: 

Our aim is to design a bot that can create designs and pictures on any surface by spraying color. The design will be chosen and given by us. This concept can be used to draw on horizontal surfaces such as floor as well as on the wall by just hanging the robot there. Patterns drawn by the robot will be more accurate and sophisticated. It will reduce the time and human efforts considerably. 

## Acknowledgement: 

We would like to express our special thanks of gratitude to our mentors Sushant Samuel Sir(EE 3rd year),Animesh Sir (GPT 4th year) and Pulkit Goyal Sir(ME 3rd year) as well as our guide and senior mentor  Prashant Shekhar Sir(EE 4th year & secretary, Models and Robotics Section) who gave us the golden opportunity to do this wonderful project on the topic “The Graffiti Bot” which helped us in doing a lot of research and we came to know about so many new things. Special Thanks to him for his exemplary guidance, monitoring and constant encouragement throughout the Project. I would also like to thank all mentors as they helped us a lot in finishing this project within the limited time although being too busy for the Robocon 2017 project. 



## Motivation: 

With the increasing trends in technology, the concept of automation is increasingly being applied to various fields. But these fields till date are limited only to scientific, military and industrial applications of automation (robots). So this idea is an attempt to extend robotics to the household field, like here, where we have tried to make a bot that can be used in homes to decorate walls and floors. 



## Hardware: 

The mechanical design of the bot includes mounting of: 
1) DC Motors with gearbox (12 volt and 400 rpm)(x2)  
2) Servo Motor (12 volt)(x1)
3) Spray-Gun(x1)
4)	Arduino Mega(x1)
5)	Adapter (12V,5A) 
6)	L298 Motor Drivers(x2) 
7)	Ultrasonic Sensor(x1)
8)	Gears(x3)
9)	Combination of LM317 and potentiometer for voltage regulation
10)	Drawer Slides(x1)
11)	Rack belt(x1)
12)	Compressor  

## Software:
We have used only arduino software for writing the code for arduino microcontroller.


## Instruction on using source code:
Our overall code consists of five sub files.One of them is the main file and others consists of only functions or methods definitons which are called/used in the main file.All the subfiles have been uploaded in github.First , you have to download them all and put them in a folder that has the same name as that of the main file( In our case, ”graffiti” is the main file).Once you have done this and connected the hardware properly,then you just have to upload the main file to the arduino board and you are ready to go.




## Working: 

The bot has two dc motors that give radial and angular motions. The feedback for the radial motion is taken through the ultrasonic sensor that emits ultrasound which gets reflected by the cardboard and thus received .It gives radial position. For the angular motion, we used a circular potentiometer which was coupled with shaft of the upper disk gives the angular position. The spray-gun is filled with the paint and connected to the compressor which creates the required pressure. But to start spraying and to continue it, a button on the spray-gun must be pressed. This is achieved by the servomotor mounted beside the gun. The servo is powered by the voltage regulator circuit at around 7 volt. 
  In software, we only used Arduino .We programmed the bot to write words only. For this, each alphabet was broken into radial and angular lines and thus their individual codes were written separately. For writing any word we have to only call the codes of the corresponding alphabets. 



## Improvements: 

1)	Algorithm will be improved for drawing designs apart from alphabets. 
2)	Simultaneous radial and angular motion will be coded. Right now, only one motion takes place at a time. This will allow us to draw better designs. 
3)	The bot will be made more compact and lighter, so that it can operate on walls as well. 
4)	Image processing can be applied, so that we won’t need to write separate codes for each design. It will automatically read given image and draw accordingly. 
5)	Bot can be improved to use more than one color. 
  
## Video: https://drive.google.com/drive/folders/0B6Il9N7ghKhHZVI2RnRPdndrMVE 
 
## Team members: 
 
1)Prashant  Sir(EE 4th year, Mentor& secretary of Models and Robotics Section) 
 
3)Animesh Sir(GPT 4th year,Mentor) 
  
4)Pulkit Sir (ME 3rd year,Mentor) 
  
5)Ashish Verma(EE 2nd year) 
  
6)Dhruv Gamdha(ME 2nd year) 
  
7)Piyush Suktel(ME 2nd year) 
  
8)Anurag Singh(EE 2nd year) 
  
9)Pulkit Singhal(ME 2nd year) 
  
10)Pratik Rode(P&I 2nd year) 
  
Thank You!!!!
