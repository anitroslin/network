#include<stdio.h>
#include<unistd.h>
int main()
{
printf("PID = %d\n parent PID = %d\n", getpid(), getppid());
}
