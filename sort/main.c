#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"


void swap1(int c[])
{
    int t;
    t=c[0];
    c[0]=c[1];
    c[1]=t;
}

void swap2(int c0,int c1)
{
    int t;
    t=c0;
    c0=c1;
    c1=t;
}

int main()
{
    //bubble();
    int a[2]={3,5},b[2]={3,5};
    swap1(a);
    swap2(b[0],b[1]);
    printf("%d %d %d %d\n",a[0],a[1],b[0],b[1]);


	return 0;
}
