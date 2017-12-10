#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    for (x=0; x<=20; x++)
    {
        for (y=0; y<=33; y++)
        {
            z = 100 - x - y;
            if (fabs(5*x + 3*y + (float)z/3 - 100)<=fabs(1e-6)) 
            {
                printf("x=%d, y=%d, z=%d\n", x, y, z);
            }
        }
    }
    return 0;
}
