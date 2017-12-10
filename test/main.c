#include<stdio.h>  
int main()  
{  
    /*
    int a = 9;  
    float *pa = (float *)&a;  
    printf("a = %d\n", a);  
    printf("*pa = %f\n", *pa);  
    *pa = 9;  
    printf("a = %d\n", a);  
    printf("*pa = %f\n", *pa);  
    */

    /*
    int a = 9;
    int *pa = (int *)&a;
    printf("a = %d\n", a);
    printf("*pa = %d\n", *pa);
    *pa = 9;
    printf("a = %d\n", a);
    printf("*pa = %d\n", *pa);
    */
  
    printf("value is:%10f\n",12.3456789);
    printf("value is:%-10f\n",12.3456789);
    printf("value is:%f\n",12.3456789);
    printf("--value is:%.3f\n",12.3456789);
    printf("value is:%10.3f\n",12.3456789);
    printf("value is:%5f\n",12.3456789);//当数据的实际位宽大于printf函数中的指定位宽时，将按照数据的实际位宽输出数据。
 

    printf("%f\n",10.3);
    printf("%e\n",10.3);
    printf("%e\n",103.2);

    short s = 10;
    unsigned short us = 10;
    int i = 10;
    long l = 10;
    unsigned long ul = 10;
    printf("s=%hd\n",s);
    printf("us=%hu\n",us);
    printf("i=%d\n",i);
    printf("l=%ld\n",l);
    printf("ul=%lu\n",ul);

    printf("%d%%\n",10);
    return 0;
}
