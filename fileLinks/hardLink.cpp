#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

using namespace std;

int main() {
    struct stat s;
    if(link("ise.txt","iselink.txt") < 0){
        perror("link error");
        exit(1);
    }
    if(lstat("iselink.txt",&s) <0)  {
        perror("stat error");
        exit(2);
    }
    cout<<"File Mode: "<<s.st_mode<<endl;
    cout<<"GID: "<<s.st_gid<<endl;
    cout<<"Block Size: "<<s.st_blksize<<endl;
    cout<<"Inode: "<<s.st_ino<<endl;
    return 0;
}
