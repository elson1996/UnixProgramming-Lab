#!/usr/bin/env bash
for arg in "$@"
do
    if [ -f $arg ]; then
        echo "$arg -> ${arg^^}"
        mv $arg ${arg^^}
    else
        echo "$arg Not Found"
    fi
done
