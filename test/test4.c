#include <stdio.h>
#include  <math.h>
int main()
{
    float  a, b, c;             
    float  s, area;                
    printf("Input a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)  
   {
       s = 1/2 * (a + b + c); 
       area = sqrt(s * (s - a) * (s - b) * (s - c));
       printf("area=%.2f\n", area); 
    }
    else
    {
       printf("It is not a triangle\n");    
    }
    return 0; 
}
