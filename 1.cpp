#include <iostream>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include <sys/types.h>
int main(int argc, char* argv[]) {
    int rc = fork();

    if(rc < 0){
        printf("fork failed");
        exit(1);
    }
    else if(rc == 0){
        printf("i am the child (pid:%d)\n", (int) getpid());
    }
    else{
        printf("i am the parent (pid:%d)\n", rc, (int) getpid());
    }

    return 0;
}
