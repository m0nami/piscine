#!/bin/bash
find . -depth -name "*.sh" | sed -e 's/.sh$//' -e "s|^./||g"
