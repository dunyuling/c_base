#include <stdio.h>

void exchange(int *a,int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 2;
    int b = 1;
    exchange(&a,&b);

    printf("a=%d\nb=%d\n",a,b);
}
