#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
using namespace std;

int main() {
    cout << "Before Fork" << endl;
    pid_t pid = fork();
    if(pid == 0)    {
        cout<<"Child PID: "<<getpid()<<endl;
        cout<<"Parent PID: "<<getppid()<<endl;
        sleep(10);
        cout<<"Child End\n";
    }
    else    {
        cout<<"Parent PID: "<<getpid()<<endl;
        cout<<"Parent of parent: "<<getppid()<<endl;

    }
    cout<<"After fork\n";
    return 0;
}