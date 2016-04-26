//
// Created by Shoaib on 26/4/16.
//

#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;

int main(int argc, const char* argv[])  {
    if(argc < 2)    {
        cout<<"Invalid parameters";
        return 1;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    if(num1 > 50 || num2 > 50)  {
        cout<<"Value exceeds 50";
        return 2;
    }
    int status;
    pid_t pid = fork();
    if(pid==0) {
        pid_t pid2 = fork();
        if(pid2 == 0) {
            exit(num1+num2);
        }
        else{
            waitpid(pid2,&status,0);
            exit(WEXITSTATUS(status)*2);
        }
    }
    else{
        waitpid(pid,&status,0);
        cout<<"Double Sum= "<<WEXITSTATUS(status);
    }
    return 0;
}