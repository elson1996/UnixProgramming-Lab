if grep "$1" /etc/passwd >> /dev/null
then
    echo "User Found"
    find . -type f -user $1 -ls | awk '{total+=$7} END{printf("Total %d",total)}'
else
    echo "User Not Found"
fi
