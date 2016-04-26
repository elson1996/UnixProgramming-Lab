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
        cout << "Child Process:";
        exit(num1+num2);
    }
    else{
        waitpid(pid,&status,0);
        cout<<"\nParent process: ";
        cout<<"\nSum= "<<WEXITSTATUS(status);
    }
    return 0;
}