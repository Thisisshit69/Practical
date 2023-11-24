 #include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void abc();
int pid;
void main()
{
pid=fork();
if(pid == 0)
{
}
else
{
 signal(SIGCLD,abc);
for(int i=0;i<1000;i++)
 printf("%d",i);
printf("Parent existing \n");
}
}
void abc()
{
printf("Child died \n");
getchar();
}
