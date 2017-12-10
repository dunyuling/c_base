#include <stdio.h>

float integral(float (*f)(float), float a, float b)
{
    float s ,h;
    int n = 100, i;
    s = ((*f)(a) + (*f)(b))  ;
    h = (b - a) / n;
    for(i=1; i<n; i++)
    {
       // s = s + (*f)(a + i*h);
        s = s + (*f)(a+i*h);
    }
    return s*h;
}

float f1(float x)
{
    return  x*x;
}

float f2(float x)
{
    return x / ( 1 + x*x);
}
