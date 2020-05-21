#!/bin/sh
cat /etc/passwd | grep -v '^#' | cut -d: -f1 | sed -n '1d;p;n' | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p |xargs -I {} echo -n {}"," | sed "s/,$/.\n/"  
