#include <stdio.h>

int main() 
{
    int x=1,day=10;
/*
    while(day>1) {
        x = (x+1)*2;
        day--;
        printf("x=%d,day=%d\n",x,day);
    } 
*/

    do {
       x = (x+1)*2;
       day--;
       printf("x=%d,day=%d\n",x,day);
    } while(day>1); 

    printf("%d\n",!0);
    return 0;
}
