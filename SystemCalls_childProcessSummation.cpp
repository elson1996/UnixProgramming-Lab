#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;

int main()  {
    int status;
    pid_t pid = fork();
    if(pid==0)  {
        cout<<"Child Process:";
        pid_t pid2 = fork();
        cout<<"hello";
        if(pid2 == 0)   {
            cout<<"\nChilds Child process:\n";
            cout<<"\nEnter two numbers: ";
            int x ,y;
            cin>>x>>y;;
            int sum = x+y;
            exit(sum);
        }
        else{
            waitpid(pid2,&status,0);
            exit(WEXITSTATUS(status)*2);
        }

    }
    else{
        cout<<"hi";
        waitpid(pid,&status,0);
        cout<<"\nParent process: ";
        cout<<"\nSum= "<<WEXITSTATUS(status);
    }
    return 0;
}
