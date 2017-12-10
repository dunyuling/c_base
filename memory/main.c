#include <stdio.h>

int main()
{
    int i = 2;
    int *pa=&i;
    printf("%d\n",*pa);
    printf("%p\n",pa);
    printf("%p\n",*i);
//    printf("%x\n",pa);
//    printf("%u\n",pa);
    return 0;
}
