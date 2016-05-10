sed -r 's/([^ ]+) (.*) ([^ ]+)/\3 \2 \1/' sampletext.txt

#only for block comments /**/
sed -rn '/^\/\*.*\*\/$/!p'
#for both block and inline comments /**/ //
sed -rn '/^(\/\*|\/\/).*(\*\/|)$/!p' sample3.txt
