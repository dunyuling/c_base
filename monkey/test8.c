#include <stdio.h>
int main( )
{ 
    int x=0,y=5,z=3;
    while(z-->0 && ++x<5) 
    {
        y=y-1;
        printf("%d,%d,%d\n",x,y,z);
    }
    printf("%d,%d,%d\n",x,y,z);
    return 0;
}
