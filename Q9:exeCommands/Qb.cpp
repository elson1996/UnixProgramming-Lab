//
// Created by shoaib on 27/4/16.
//

#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>

using namespace std;

int main(int argc, const char *argv[])  {
    if(argc < 2){
        cout<<"Invalid Arguments";
        return 1;
    }
    pid_t pid = fork();
    if(pid == 0)    {
        switch(atoi(argv[1]))   {
            case 1:
                cout<<"factorial: \n";
                char* args1[4];
                args1[0] = (char *) "bash";
                args1[1] = (char *) "script_exeFactorial.sh";
                args1[2] = (char *) argv[2];
                args1[3] = (char *) 0;
                execv("/bin/bash", args1);
                break;
            case 2:
                cout<<"Current Shell:\n";
                execlp("echo","echo","$SHELL",(char *)0);
                break;
            case 3:
                char *arg2[] = { "/bin/sh", "script_findExec.sh",(char *) 0 };
                char *envargs[] ={0};
                execve(arg2[0], &arg2[0], envargs);
                break;
        }
    }
    else{
        wait(0);
        cout<<"\nEND\n";
    }
    return 0;
}
