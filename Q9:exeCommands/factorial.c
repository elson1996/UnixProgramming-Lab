//
// Created by shoaib on 27/4/16.
//

#include<stdio.h>
#include <stdlib.h>

void main(int argc, const char *argv[])  {
    int i=1;
    int fact = 1;
    while(i<=atoi(argv[1]))  {
        fact*=i++;
    }
    printf("Factorial: %d",fact);
}