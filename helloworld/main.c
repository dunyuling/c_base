#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

int main()
{
    /*
    char a = 'a';
    short b = 1;
    int c = 2;
    long d = 3;
    float e = 1.5;
    double f = 1.5;
    //@fixme 浮点数在内存中的表示还没搞明白

    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(e));
    printf("%d\n",sizeof(f));
    printf("Hello world!\n");

    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(long));
     */

     /*
     //int a = 2;
    float f = 1.5;
    printf("%f\n",f);
    double d = 1.5;
    printf("%f\n",d);
    */

    /*
    int total = 15;
    int number = 2;
    float aver;
    //aver = (float)total / number;
    aver = (float)(total/number);
    printf("aver = %f\n",aver);
    */

    /*
    int n = 6;
    printf("result=%d\tn=%d\n" , -++n,n);
    */

    /*
    float total = 15.0;
    int number = 2;
    float aver = total / number;
    printf("aver = %f\n",aver);
    */

    /*
    int a=1,b=0;
    scanf("%d\r%d",&a,&b);
    printf("a=%d,b=%d",a,b);
    */

    /*
    char ch;
    printf("input a character:");
    ch = getchar();
    ch = ch + 32;
    putchar(ch);
    putchar('\n');
    putchar('0x07');
    */

    /*
    char ch1,ch2;
    ch1 = getchar();
    printf("ch1=%c\n",ch1);
    //getchar();
    fflush(stdin);
    ch2 = getchar();
    printf("ch2=%c\n",ch2);
    */

    /*
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
    //scanf("%*c%c", &b);
    scanf(" %c",&b);
    printf("character:%c\n", b);
    printf("Please input a float number:");
    scanf("%f", &c);
    printf("float:%f\n", c);
    */

    /*
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    printf("%d%c%d=%d",a,op,b,a+b);
    */


    /*
    float f;
    scanf("%2e",&f);
    printf("%f\n",f);
    */


    /*
    char c;
    scanf("*%c",&c);
    printf("%d",c);
    */

    /*
    const float pi = 3.14159;
    const float r = 5.4;
    printf("area=%f\n",pi * r *r);  1.1
    */

    /*
    printf("value is:%10f\n",12.3456789);
    printf("value is:%-10f\n",12.3456789);

    char c='\x21';
    printf("%c\n",c);
    putchar(c);
    putchar('\n');

    int a=1234;
    printf("%2d\n",a);
    */


    /*
    int year;
    scanf("%d",&year);
    if(( (year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        printf("%s\n","YES");
    } else {
        printf("%s\n","NO");
    }
    */

    /*
    long a ;
    a = 200 * 300 * 400 * 500;
    printf("%ld\n",a);
    unsigned short b = 65535;
    b += 1;
    printf("%u\n",b);

    short c = 32768;
    printf("%hd\n",c);
    */



    /*
    float  a, b, c;
    float  s, area;
    printf("Input a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
   {
       s =  (a + b + c) * 1/2;
       area = sqrt(s * (s - a) * (s - b) * (s - c));
       printf("area=%.2f\n", area);
    }
    else
    {
       printf("It is not a triangle\n");
    }
    */


    /*
    float temp;
    int i,flag = 0,n;
    printf("Input temp:");
    scanf("%f", &temp);
    if(fabs(temp-(int)temp)<1e-8) {
        n = (int)temp;
        if( n < 0 || n == 0 || n == 1) {
            flag = 0;
        } else {
            int k = sqrt(n);
            for (i=2; i<=k&&!flag; i++) {
                if(n % i == 0){
                    flag =1;
                }
            }

            if(flag) {
                printf("No!\n");
            } else {
               printf("Yes!\n");
            }
        }
    } else {
        printf("temp 不是整数\n");
    }
    */


    /*
    int x, y, z;
    for(x=0;x<=20;x++) {
        for(y=0;y<=33;y++) {
            z = 100  - x - y;
            if ( 5*x + 3*y + z/3.0 == 100) {
                printf("x=%d, y=%d, z=%d\n", x, y, z);
            }
        }
    }
    */

    printf("----\n");
    assert(0);
    printf("====\n");




    /*
    printf("%f\n",fabs(-0.1));
    printf ("The absolute value of 3.1416 is %f\n", fabs (3.1416) );
    */

    return 0;
}
