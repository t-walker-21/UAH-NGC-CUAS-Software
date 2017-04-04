#!/bin/sh

		apMAC=$(grep -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | head -1)


		if [[ $apMAC =~ 60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2} ]]; then
		#if [ $apMAC = "92:68:C3:F1:66:E0" ]; then
		echo $apMAC			
		
		else
			echo "Not found"
		fi	# If MAC not found, search again
