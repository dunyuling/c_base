#include <stdio.h>
#include "max.h"
#include "min.h"
//#include "max.c"


int main() 
{
    int a=100,b=50;
    int maxNum=max(a,b);
    int minNum=min(a,b);
    printf("the max num is %d\n the min num is %d\n",maxNum,minNum);
    return 0; 
}
