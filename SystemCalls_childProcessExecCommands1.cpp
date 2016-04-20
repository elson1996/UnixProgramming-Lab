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
        //system("ls -S|head -5");
        //execl("ls","-S","|","head","-5";
        execlp("ls","ls","-S",">","file1.txt",(char *)0);
        cout<<"\n\nhello\n\n";
        execlp("head","head","-5","file1.txt",(char *)0);


    }
    else{
        wait(0);
        cout<<"Parent Process";
    }
    return 0;
}
