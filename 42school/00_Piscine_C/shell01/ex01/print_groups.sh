#!/bin/sh
groups  | sed -e 's/ /,/g' |  tr -d  ' '
