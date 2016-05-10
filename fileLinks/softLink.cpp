//
// Created by shoaib on 11/5/16.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include<time.h>
using namespace std;

int main() {
    struct stat s;
    if(symlink("ise.txt","isesoftlink.txt") < 0){
        perror("link error");
        exit(1);
    }
    if(lstat("isesoftlink.txt",&s) <0)  {
        perror("stat error");
        exit(2);
    }
    cout<<"Last Modified: "<<ctime(&s.st_mtime)<<endl;
    cout<<"Size: "<<s.st_size<<endl;
    cout<<"Links: "<<s.st_nlink<<endl;
    cout<<"Inode: "<<s.st_ino<<endl;
    return 0;
}
