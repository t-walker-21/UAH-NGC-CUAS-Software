#!/bin/bash

res=$(lsusb | grep -Eo "OpenMoko")
echo $res
