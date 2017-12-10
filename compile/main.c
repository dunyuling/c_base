#include <stdio.h>
#define M int main()
#define R 19
#define N(n) n*10
#define ADD(a,b) (a+b)

int add(int a,int b) {
    return a + b;
}

typedef int tni;
//int main()
M
{
    tni a = R;
    printf("a=%d\n",a);
    printf("helloworld\n");
    int b = N(a);
    printf("b=%d\n",b);

    int  c = ADD(1,2)*ADD(1,2);
    printf("c=%d\n",c);
    int e = add(1,2)*add(1,2);
    printf("e=%d\n",e);

    float f = add(1.0, 2.3);
    printf("f=%f\n",f);
    float g = ADD(1.0,2.3);
    printf("g=%f\n",g);
    return 0;
}

