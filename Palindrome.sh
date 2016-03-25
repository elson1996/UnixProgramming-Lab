#!/usr/bin/env bash
echo -n "Enter word: "
read word
revWrd=`echo $word|rev`
#if asked to do without rev funtion use this
#len=${#word}
# revWrd=""
# while [[ $len -gt 0 ]]; do
#     #statements
#     revWrd=$revWrd$(echo $word | cut -c $len)
#     let len-=1
# done
if [[ "$word" == "$revWrd" ]]; then
    #statements
    echo "Word is a palindrome"
else
    echo "Word is not a palindrome"
fi
