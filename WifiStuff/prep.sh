#!/bin/sh
#clean up dump files and take down wireless card
	rm -f dump*
	ifconfig wlan0 down
