#!/bin/sh
groups $FT_USER | sed -e "s/$FT_USER : //" -e "s/ /,/g" | xargs -I {} echo -n {}
