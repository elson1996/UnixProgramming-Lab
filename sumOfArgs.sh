#!/usr/bin/env bash
sum=0
for arg in $@
do
    let sum+=arg
done
echo "Sum = $sum"
