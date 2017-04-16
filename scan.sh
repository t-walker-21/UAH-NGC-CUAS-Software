#!/bin/sh
	rm -f dump*
	ifconfig wlan1 down
	xterm -hold -e airodump-ng -w dump wlan1 & tput setaf 3; echo "Searching for APs...$(tput sgr 0)"	# Scan for APs
