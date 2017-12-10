#include <stdio.h>
#include "pointer.h"

#define MAX 300
void fact(int n);

typedef struct student
{
    char name[10];
}STUDENT;

int main()
{
    //pointer_func();
    //pointer_array_and_string();

    /*
    float s = integral(f1, 1.0, 2.0);
    printf("s=%f\n",s);
    s = integral(f2, 0.0, 1.0);
    printf("s=%f\n",s);
    */

    //ysfh();

    /*
    int i;
    for(i=1;i<=40;i++)
    {
        printf("%d! = ",i);
        fact(i);
        printf("\n");
    }
    */
    STUDENT a = {"lhg"};
    printf("%s\n",a.name);
    return 0;
}

void fact(int n)
{
    int a[MAX]={1};
    int digit=1;    /*阶乘至少为1位，因此digit（位数）初始值为1*/
    int carry=0;    /*进位*/
    int temp,i,j;
    for (i=1;i<=n;i++)
    {
        for (j=0;j<digit;j++)
        {
            temp=a[j]*i+carry;   /*temt为未进位前的数字*/
            a[j]=temp%10;
            carry=temp/10;
        }
        while(carry!=0)
        {
            a[++digit-1]=carry%10; /*必须限制carry在[0,9]*/
            carry=carry/10;
        }
   }

   for(i=digit-1;i>=0;i--)
    {
       printf("%d",a[i]);
    }

}
