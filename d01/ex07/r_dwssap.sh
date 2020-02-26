#!/bin/sh

cat /etc/passwd | grep ':*:' | cut -d : -f 1 | sed '1!n;d' | rev | sort -rdf | sed -n "$FT_LINE1,$FT_LINE2 p" | awk 1 ORS=', ' | sed 's/..$/./' | tr -d '\n'
