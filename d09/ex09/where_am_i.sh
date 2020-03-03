#!/bin/sh

ipv4=$( ifconfig | grep "inet " | grep -v "127.0.0.1" | awk '{print $2}' )
if [ -z "$ipv4" ]
then
	echo "I am lost!"
else
	echo "$ipv4"
fi
