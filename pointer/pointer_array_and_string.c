#include <stdio.h>

int pointer_array_and_string()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    for(int i=0; i<3; i++)
    {
        printf("p[%d]=%d\t", i, p[i]);
    }
    printf("\n");

    char b[] = "abcd";
    char *p2 = b;
    for(int i=0; i<4; i++)
    {
        printf("p2[%d]=%c\t", i, p2[i]);
    }
    return 0;
}
