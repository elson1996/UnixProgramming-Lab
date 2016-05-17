f = open("newfile.txt",'w+')
f.write("Hello World")
f.write("\nThis is python")
f.write("\nfor 'unix lab'")
f.write("\nastalavista baby")
f.close

f = open("newfile.txt",'r')
line_num = 1
for line in f:
    if line_num%2 != 0:
        line = line.upper()
    print line,
    line_num += 1
