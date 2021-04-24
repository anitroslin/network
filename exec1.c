#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char *argv[]){
printf("pid of exec1.c = %d\n", getpid());
printf("We are in exec.c\n");
char *args[]={"We","are","in","this","together"};
execv("./exec2",args);
printf("Back to exec1.c");
return 0;
}
