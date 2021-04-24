#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
int main(){
  pid_t q;
  printf("Before forking\n");
  q=fork();
  if(q==0){
    printf("Child process with id = %d\n",getpid());
    printf("My Parent's process id =  %d\n",getppid());
  }
  else{
   wait(NULL);
   printf("My child's process id = %d\n",q);
   printf("Parent process with id = %d\n",getpid());
 }
}
