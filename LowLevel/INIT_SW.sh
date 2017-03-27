echo 5 > /sys/class/gpio/export
echo 6 > /sys/class/gpio/export

echo in > /sys/class/gpio/gpio5/direction
echo in > /sys/class/gpio/gpio6/direction
