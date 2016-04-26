#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>

using namespace std;

int main()  {
    pid_t pid = fork();
    if(pid == 0)    {
        cout<<"Child process";
        execlp("bash","bash","script_5largestFiles.sh",(char *)0);
        execl("/bin/ps","ps","aux",(char *)0);
        execle()



    }
    else{
        wait(0);
        cout<<"Parent Process";
    }
    return 0;
}
