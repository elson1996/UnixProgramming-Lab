sed 's/ .*//' sampletext.txt

sed -r 's/([a-z]+) ([a-z]+) ([a-z]+).*/\1 \3/' sampletext.txt
