#!/bin/sh

init=$( stat -r bomb.txt | cut -d ' ' -f 9 )
new=$( echo "$init - 1" | bc )
echo "$new"
