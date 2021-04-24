#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void *func(void *value)
{
long *id = (long *)value;
printf("Thread id is %ld\n", *id);
}
int main()
{
pthread_t tid;
pthread_create(&tid, NULL, func, (void *)&tid);
pthread_exit(NULL);
return 0;
}

