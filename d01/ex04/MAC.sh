#!/bin/sh

ifconfig | grep 'ether ' | rev | cut -d ' ' -f 2 | rev
