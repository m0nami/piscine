#!/bin/sh
ifconfig -a | grep ether | gawk '{print $2}'  | sed "1,2s/$/\n/"
