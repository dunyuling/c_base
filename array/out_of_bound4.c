#include <stdio.h>

int oob4()
{
    int i, j;
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("=============\n");
     for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

