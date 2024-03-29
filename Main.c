#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Motor,  mtr_S1_C1_1,     ,              tmotorNone, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     ,              tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                           Autonomous Mode Code Template
//
// This file contains a template for simplified creation of an autonomous program for an Tetrix robot
// competition.
//
// You need to customize two functions with code unique to your specific robot.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.
#include "RobotControl.c" //unlike the standard template, this is our Suggusted method of organizing code.
//the #include system will include all of the code from another file into the program. this can spread out your code into seperate files, thus making it more managable
//furthermore, you can also use the same functions in each of your autonomous programs without having to copy and paste all of your functions into each new autonomous program.
//for each autonomous program, just copy and paste this code into a new program and save it in the same directory as RobotControl.c


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                    initializeRobot
//
// Prior to the start of autonomous mode, you may want to perform some initialization on your robot.
// Things that might be performed during initialization include:
//   1. Move motors and servos to a preset position.
//   2. Some sensor types take a short while to reach stable values during which time it is best that
//      robot is not moving. For example, gyro sensor needs a few seconds to obtain the background
//      "bias" value.
//
// In many cases, you may not have to add any code to this function and it will remain "empty".
//
/////////////////////////////////////////////////////////////////////////////////////////////////////



task main()
{
  initializeRobot();

  waitForStart(); // Wait for the beginning of autonomous phase.

  ///////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////
  ////                                                   ////
  ////    use the functions in robotControl.c here       ////
  ////                                                   ////
  ///////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////

  //here is a short example of telling the robot to move forward 2 feet at 100% power:
  DriveForward(12*2, 100); //before you download this program to your robot, please right click on this function and select "Go to Definition/Declaration" this will take you to a blank function
  //the functions have not actually been implimented yet. the robot will do nothing unless you impliment the functions.

  while (true)
  {}
}
