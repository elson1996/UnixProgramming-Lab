//
// Created by shoaib on 10/5/16.
//

#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include<fcntl.h>
#include <sys/stat.h>

using namespace std;

void fileOp(char * filename)    {
    char buffer[21] = "12345678901234567890";
    struct stat s;
    int fd;
    if((fd = creat(filename,0644)) == -1){
        perror("Error Creating");
        exit(1);
    }
    if((write(fd,buffer,20)) <0 )   {
        perror("error writing");
        exit(1);
    }
    close(fd);
    if((fd = open(filename,O_RDONLY)) == -1){
        perror("Error Reading") ;
        exit(2);
    }
    read(fd,buffer,15);
    close(fd);
    if(lstat(filename,&s) == -1){
        perror("Stat error");
        exit(3);
    }
    cout<<"Last Access: "<<ctime(&s.st_atime);
    cout<<"UID: "<<s.st_uid;
    cout<<"File Size: "<<s.st_size;
}
int main()  {
    int fd;
    char buffer[100];
    if((fd=mkdir("MSRIT",0755))==-1)    {
        perror("Creating Error");
        exit(2);
    }
    if(chdir("MSRIT") < 0)  {
        perror("CHDIR Error");
        exit(3);
    }
    fileOp("foo.txt");
    fileOp("hello.txt");
    if(getcwd(buffer,100) == NULL)   {
        perror("pwd error");
        exit(4);
    }
    cout<<"PWD: "<<buffer;
    return 0;
}