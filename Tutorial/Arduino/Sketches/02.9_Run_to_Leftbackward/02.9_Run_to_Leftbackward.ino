/**********************************************************************
  Product     : Cokoino 4WD Mecanum Car chassis kit
  Auther      : www.cokoino.com
  Modification: 2023/11/07


          motor4 -------  motor3
                  |   |
                  |   |
                  |   |
          motor1 -------  motor2
  
**********************************************************************/

#include <AFMotor.h>
 //AF_DCMotor motor1(1);//define motor1
 AF_DCMotor motor2(2);//define motor2
 //AF_DCMotor motor3(3);//define motor3
 AF_DCMotor motor4(4);//define motor4

void setup() 
{
  //Set initial speed of the motor & stop
  // motor1.setSpeed(200);//setup the speed of motor1
   motor2.setSpeed(200);  //setup the speed of motor2
  // motor3.setSpeed(200);//setup the speed of motor3
   motor4.setSpeed(200);  //setup the speed of motor4
   
}

void loop() 
{
 // motor1.run(BACKWARD);  // motor1 run BACKWARD
  motor2.run(BACKWARD);    // motor2 run BACKWARD
 // motor3.run(FORWARD);   // motor3 run FORWARD
  motor4.run(BACKWARD);    // motor4 run BACKWARD
  
}
