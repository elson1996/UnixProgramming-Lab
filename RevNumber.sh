#!/usr/bin/env bash

echo "Enter a number: "
read num
rev=0
rem=0
while [[ num -ne 0 ]]; do
    rem=`expr $num % 10`
    rev=`expr $rev \* 10 + $rem`
    let num=num/10
done
echo "Reverse : $rev"
