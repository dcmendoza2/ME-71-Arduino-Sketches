# About

- We will be using the GY-521 breakout board, which has MPU6050. MPU6050 is a chip with Micro Electro-Mechanical Systems combining a 3-axis accelerometer and a 3-axis gyroscope (along with a temperature sensor). It has its own ADC and we can interface with it through the I2C bus of our Arduino Uno board. Additionally, it has its own Digital Motion Processor (DMP) which we will use to demonstrate a sample application of the sensor.


# How to Replicate:

## Install:

- Wire.h
If you did not include this in your installation of Arduino IDE, you can manually download the library [here](https://github.com/arduino/ArduinoCore-avr/tree/master/libraries/Wire).
- I2Cdev.h
On your Arduino Library navigate: Sketch > Include Library > Add .ZIP library then choose the 'I2Cdev.zip' file included in this repository

- MPU6050.h
Same with I2Cdev.h installation but this time choose 'MPU6050.zip' file.

Documentation for I2Cdev.h and MPU6050.h libraries: https://www.i2cdevlib.com/docs/html/class_m_p_u6050.html

## Run Calibration sketch (MPU_6050_calibration). 

Make sure to open your serial monitor so you can monitor the calibration. You will be prompted to send an input to start the calibration process.

As instructed by the calibration sketch the offsets will be on this order: acelX, acelY, acelZ, giroX, giroY, giroZ. Make sure that the sensor readings with offsets will be as close as possible to 0 0 16384 0 0 0, otherwise redo the calibration.

## Input values obtained from the calibration sketch to the MPU-6050-GY521 sketch.



## For the demo with the airplane:


## Replace the offset values in Demo/MPU6050_DMP6 sketch with the values obtained from the calibration sketch.
Upload MPU6050_DMP6 sketch to Arduino.

## Install Processing IDE (by just running processing.exe from processing-3.5.4 folder)
- Extract Toxiclib.zip to the processing/libraries folder created in your Documents folder.
## Run MPUTeapot.pde in Processing IDE while the Arduino is connected to the PC.