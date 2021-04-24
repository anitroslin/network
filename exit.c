#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
  pid_t pid=fork();
  if(pid==0){
  printf("child process id = %d\n",getpid());
  exit(EXIT_SUCCESS);
 }
 else if(pid>0){
  printf("parent process id = %d\n",getpid());
  printf("waiting for child process to finish\n");
  wait(NULL);
  printf("child process finished\n");
 }
 else
  printf("child process not created");
 
return EXIT_SUCCESS;
}
