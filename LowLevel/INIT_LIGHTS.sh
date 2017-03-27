#!/bin/sh

#create file descriptors for gpio interface
echo 23 > /sys/class/gpio/export
echo 22 > /sys/class/gpio/export
echo 17 > /sys/class/gpio/export
echo 27 > /sys/class/gpio/export

#set GPIO port directions to out
echo out > /sys/class/gpio/gpio23/direction
echo out > /sys/class/gpio/gpio22/direction
echo out > /sys/class/gpio/gpio17/direction
echo out > /sys/class/gpio/gpio27/direction

#set GPIO port values to logic LOW

echo 0 > /sys/class/gpio/gpio23/value
echo 0 > /sys/class/gpio/gpio22/value
echo 0 > /sys/class/gpio/gpio17/value
echo 0 > /sys/class/gpio/gpio27/value

