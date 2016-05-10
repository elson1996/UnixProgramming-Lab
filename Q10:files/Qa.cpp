#include <iostream>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include <cstring>
#include <sys/stat.h>
#include<stdio.h>
#include <error.h>

using namespace std;

int main() {
    char buffer[21] = "01234567890123456789";
    int file;
    if((file = creat("Unix.txt",0644)) == -1){
        perror("Create error");
        exit(1);
    }
    if((write(file,buffer,strlen(buffer))) <0)  {
        perror("Write error");
        exit(2);
    }
    lseek(file,50,SEEK_CUR);
    close(file);
    chmod("Unix.txt",0755);
    return 0;
}