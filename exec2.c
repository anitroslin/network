#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int  argc, char *argv[]){
  printf("We are in exec2.c\n");
  printf("pid of exec.2 = %d\n", getpid());
  return 0;
}
