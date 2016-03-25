#!/usr/bin/env bash

if [ -f $1 ]; then
    creTime=`ls -l $1 | cut -d" " -f 6-8`
    echo "created : $creTime"
else
    echo "File not found"
fi
