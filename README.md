#Rosserial-Arduino-Playground

##Pub_sinus

Once you've uploaded the code to your Arduino, open your terminal and write these following commands:

Terminal 1:
$ roscore

Terminal 2:
$ rosrun rosserial_python serial_node.py /dev/ttyUSB0

Terminal 3:
$ rostopic echo sinus

##Sub_lcd

Set up your lcd display following the instructions of this website: http://diwo.bq.com/programando-lcd/ (unfortunately it is in spanish but you can follow the images)

Once you've uploaded the code to your Arduino, open your terminal and write these following commands:

Terminal 1:
$ roscore

Terminal 2:
$ rosrun rosserial_python serial_node.py /dev/ttyUSB0

Terminal 3:
$ rostopic pub lcd std_msgs/String <string>

Enjoy!

Marc
