#include <stdio.h>
int main()
{
    int    a;
    char   b;
    float  c;
    printf("Please input an integer:");    
    scanf("%d", &a);
    printf("integer:%d\n", a);
    printf("Please input a character:");    
    //1.getchar()
    //getchar();
    //scanf("%c",&b);
    //2.%*c
    scanf("%*c%c", &b);
    printf("character:%c\n", b);
    printf("Please input a float number:");    
    scanf("%f", &c);
    printf("float:%f\n", c); 
    return 0;
}
