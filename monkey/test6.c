#include <stdio.h>
int main()
{
    int    upper = 300, step = 20;
    float  fahr = 0, celsius;
    while (fahr < upper)
    {
        celsius = 5.0 / 9 * (fahr - 32); 
        printf("%4.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
