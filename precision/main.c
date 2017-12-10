#include <stdio.h>

int main()
{
    long a = 123456789;
    float b;
    double c = 123456789123.456789;
    b = a;
    printf("%ld\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
    b = c;
    printf("%f\n",b);
    c = a;
    printf("%f\n",c);
    float d = 0.00000000000000000000000000000000000000000001;
    float e = 0.00000000000000000000000000000000000000000002;
    float f = d - e;
    printf("%d,%d,%d,%f\n",d>e,d<e, d == e,f);

    return 0;

}
