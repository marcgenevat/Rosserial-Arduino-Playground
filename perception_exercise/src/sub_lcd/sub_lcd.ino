#include <Wire.h>
#include <ros.h>
#include <std_msgs/String.h>
#include "bqLiquidCrystal.h"

LiquidCrystal lcd(0);
String text;

ros::NodeHandle nh;

void message_cb(const std_msgs::String& msg) {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(msg.data);
}

ros::Subscriber<std_msgs::String> sub("lcd", message_cb);

void setup() {
  lcd.begin(20, 4);
  lcd.clear();
  
  nh.initNode();
  nh.subscribe(sub);
}

void loop() {
  nh.spinOnce();
  delay(1);
}
