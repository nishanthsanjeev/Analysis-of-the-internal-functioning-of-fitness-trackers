# Analysis-of-the-internal-functioning-of-fitness-trackers

Done under Prof. Vinayak Naik, HOD of the CS department, BITS Goa.

What I did:

Study and analyse the internal functioning of fitness trackers, more specifically pertaining to its accelerometer components.

Procedure:

1)	Firstly, extract raw data from the Garmin fitness tracker being analysed using the pandas database, and write a program to check if a Move IQ Event occurs. This is done by using a blogger’s GitHub library, the link to which is here: https://github.com/dtcooper/python-fitparse 

This is to study how the data is registered by the tracker in a day, while being worn by a general user.

2)	Next, write out a simple program to detect Move IQ Events, as Garmin defines them.

3)	Configure and design an accelerometer from scratch. 

•	Firstly, test and record phone accelerometer data using a simple Android application.
•	Next, design an accelerometer using Arduino. The chip used here as an accessory is the MPU6050 chip, which consists of an accelerometer as well as a gyroscope.

Observation:
1)	From analysing the raw data extracted, it is found that directly measurable data such as heartrate data is fully consistent with the activities performed regularly by an individual throughout the day. However, it is viewed the accelerometer readings noted using the algorithm are not fully understandable.

2)	As we proceed to calibrate a phone accelerometer, the outputted data is found to be consistent with the phone’s movements in all three planes of motion during tracking.


3)	The same can be seen when calibrating the MPU6050 chip to work with an Arduino chip.

Conclusion:

The results have shown that, detecting variations in motion and recording consistent accelerometer data has proven successful. 
The possible errors that may have occurred during this experiment include the lack of precision when moving the accelerometer device during the recording of data. 
This paves the way to further precisely study accelerometer data recordings in more dynamic environments, such as detecting the movement of a tennis racket while swinging it, for example.
