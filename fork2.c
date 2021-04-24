#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
fork();
fork();
fork();
printf("The process id is %d\n",getpid());
return 0;
}
