#!/bin/sh

awk '/^[Nn][Ii][Cc][Oo][Ll][Aa][Ss][\t][Bb][Aa][Uu][Ee][Rr]/' < $1 | rev | cut -d$'\t' -f 2 | rev
