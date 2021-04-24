#include<stdio.h>
#include<unistd.h>
int main(void){
fork();
printf("Before fork\n");
printf("After fork\n");
}

