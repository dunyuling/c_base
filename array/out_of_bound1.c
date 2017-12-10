#include <stdio.h>

int oob1()
{
    int i, a = 1, c =  2, b[5] = {0};
    printf("%p, %p ,%p, %p\n",b, &c, &a, &i);
    for(i=0; i <=8; i++ )
    {
        b[i] = i;
        printf("%d  ",b[i]);
    }
    printf("\nc=%d, a=%d, i=%d\n", c, a, i);
    return 0;
}
