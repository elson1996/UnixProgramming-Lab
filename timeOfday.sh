#!/usr/bin/env bash
time=`(date | cut -d ' ' -f 4 | cut -d':' -f 1)`
if [[ $time -lt 12 ]]; then
    echo "Good Morning"
elif [[ $time -lt 17 ]]; then
    echo "Good Afternoon"
elif [[ $time -lt 21 ]]; then
    echo "Good Evening"
else
    echo "Good Night"
fi
