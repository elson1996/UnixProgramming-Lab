#!/usr/bin/env bash
if [[ $# -lt 1 ]]; then
    echo "Enter Filename"
    read Filename
else
    Filename=$1
fi
while [[ true ]]; do
    echo -n "Code: "
    read code
    case $code in
        [0-9][0-9])
            if grep "$code" $Filename > /dev/null; then
                echo "Code already exists"
                continue
            fi
        ;;
        *)
            echo "Invalid Code"
                continue
        ;;
    esac
    echo -n "Description: "
    read description
    case $description in
        *[!\a-zA-Z]* )
            echo "Invalid Characters"
            continue
        ;;
        "")
            echo "Description Empty"
            continue
        ;;
        *)
            echo "$code | $description" >> $Filename
            continue
        ;;
    esac
done
