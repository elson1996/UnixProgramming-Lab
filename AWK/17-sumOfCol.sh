#!/usr/bin/env bash

echo "Enter number of lines : "
read num
echo "Enter line 1"
read line
echo $line > file.txt
i=2
while [ $i -le $num ]
do
	echo "Enter line $i"
	read line
	echo $line >> file.txt
	let i+=1
done



awk -v num=$1 '{sum+=$num} END{printf("Sum=%d\n",sum);}' file.txt
