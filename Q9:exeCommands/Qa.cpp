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
                cout<<"5 largest files: \n";
                execl("/bin/bash","bash","script_5largestFiles.sh",(char *)0);
                break;
            case 2:
                cout<<"Number of Processes:\n";
                char* args[2];
                args[0] = (char *) "bash";
                args[1] = (char *) "script_numberOfProcesses.sh";
                args[2] = (char *)0;
                execvp("bash",args);
                break;
            case 3:
                cout<<"Sorted Employees";
                execle("/bin/bash", "script_sortEmployees.sh", (char *)0);
                break;
            default:break;
        }
    }
    else{
        wait(0);
        cout<<"\nEND\n";
    }
    return 0;
}