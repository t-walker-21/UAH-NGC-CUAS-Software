#!/bin/sh
apCh=$(grep -E "60:60:1F:[0-9A-F]{2}:[0-9A-F]{2}:[0-9A-F]{2}" dump-01.csv | cut -d "," -f 4)
echo $apCh
VALID_PASSWORD="secret"

echo "Please enter the password"
read PASSWORD

if [ "$PASSWORD" = "$VALID_PASSWORD" ]; then
	echo "You have access!"
else
	echo "Access Denied."
fi

