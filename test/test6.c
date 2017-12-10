#include <stdio.h>
int main()
{ 
    int a,b,c;
    a=10;
    b=20;
    c=(a%b<1)||(a/b>1);
    printf("%d,%d,%d",a%b,a/b,c);
    return 0;
}
