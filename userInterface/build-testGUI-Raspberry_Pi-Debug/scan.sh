#!/bin/sh
#clean up dump files
	rm -f dump*
	ifconfig wlan0 down
	xterm -hold -e airodump-ng -w dump wlan0 & tput setaf 3; echo "Searching for APs...$(tput sgr 0)"	# Scan for APs
