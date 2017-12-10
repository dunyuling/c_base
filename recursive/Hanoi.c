#include <stdio.h>
#include <time.h>

void Hanoi(int n,char a,char b, char c);
void Move(int n,char a,char b);

int main()
{
    int n;
    printf("Input the number of disk\n");
    scanf("%d",&n);
    time_t timep;
    struct tm * timeinfo;
    time(&timep);
    timeinfo = localtime(&timep);
    fprintf(stdout, "start time is: %s", asctime (timeinfo) );
    printf("steps of moving %d disks from A to B by means of C\n",n);
    Hanoi(n,'A','B','C');
    time(&timep);
    timeinfo = localtime(&timep);
    fprintf(stdout, "end time is: %s", asctime (timeinfo) );
    return 0;
}

void Hanoi(int n,char a,char b,char c)
{
    if(n==1) 
    {
	Move(n,a,b);
    }
    else
    {
       Hanoi(n-1,a,c,b);
       Move(n,a,b);
       Hanoi(n-1,c,b,a);
    }
}

unsigned long line = 1;
void Move(int n,char a ,char b)
{
    fprintf(stdout,"%d move from %c to %c\t%lu\n",n,a,b,line++);
} 
