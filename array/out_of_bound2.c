#include <stdio.h>

int oob2()
{
    int i, j;
    int a[2][3] = {0};
    a[3][0] = 6;
    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
