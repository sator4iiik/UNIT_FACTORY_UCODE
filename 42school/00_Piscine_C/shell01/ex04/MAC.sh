#!/bin/sh
ifconfig | grep "ether" | sed 's/ether//g' | cut -c 3-
