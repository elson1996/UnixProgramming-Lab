#!/usr/bin/env bash

echo "Enter string"
read str
len=`expr length "$str"`
if [ $len -lt 10 ]; then
    echo "String less than 10 characters"
else
    echo "String longer than 10 characters"
fi
