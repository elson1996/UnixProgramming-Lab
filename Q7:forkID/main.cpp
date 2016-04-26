#include <iostream>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

int main() {
    pid_t pid = fork();
    if(pid == 0)    {
        cout<<"Child Process";
        cout<<"\nPID: "<<getpid();
        cout<<"\nParent PID: "<<getppid();
        exit(0);
    }
    else{
        wait(0);
        cout<<"\nParent Process:";
        cout<<"\nPID: "<<getpid();
        cout<<"\nChild PID: "<<pid;
    }
    return 0;
}