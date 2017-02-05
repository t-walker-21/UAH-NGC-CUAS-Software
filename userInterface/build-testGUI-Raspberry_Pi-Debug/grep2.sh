#!/bin/sh

		apMAC=$(grep -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | head -1)
		echo "AP-MAC = " $apMAC
		apCh=$(grep -E "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | cut -d "," -f 4)
		echo "Channel = " $apCh

	iwconfig wlan0 channel $apCh

		if [ "$apMAC" = "60:60:1F:04:74:40" ]; then
			# echo $apMAC			
			echo DJI	
		fi	# If MAC not found, search again

		
