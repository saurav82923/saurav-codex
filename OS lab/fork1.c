#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(){
    // printf("my process id: %d, parent process id: %d", )
    fork();
    printf("hello");
    return 0;
}