#!/bin/sh

		apMAC=$(grep -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | head -1)
		#echo $apMAC
		#apCh=$(grep -E "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | cut -d "," -f 4)

#echo $apCh
	# Search and trim MAC
	#iwconfig wlan0 channel $apCh

		if [ "$apMAC" = "60:60:1F:04:74:40" ]; then # [0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" ]; then
			#tput setaf 1; echo "Target AP Found!$(tput sgr 0)"
			echo DJI
		
		fi	# If MAC not found, search again
	
