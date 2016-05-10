 sed -nr '/^[0-9]+$/p' sample2.txt

 sed -nr '/.*[0-9].*[0-9].*[0-9].*[0-9].*[0-9].*/p' sample2.txt
sed -nr '/(.*[0-9].*){5,}/p' sample2.txt
