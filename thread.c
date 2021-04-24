#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *func(void *value){
    printf("Hello from 2nd thread\n");
    int *num= (int *)value;
    printf("Value is %d",*num);
    return NULL;
}
int main(){
    pthread_t thread;
    printf("hello from 1st thread\n");
    int num=123;
    
    pthread_create(&thread,NULL,func,&num);
    pthread_join(thread,NULL);
    return EXIT_SUCCESS;
}
