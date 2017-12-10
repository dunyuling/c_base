#include <stdio.h>

int main()
{
    int a,b;
    printf("input the number a\n"); 
    scanf("%d",&a);
    printf("the input value a is %d\n",a);
    printf("input the number b\n");
    scanf("%d",&b);
    printf("the input value b is %d\n",b);
    if(0==b){
	fprintf(stderr," err\n ");
	return 1;
    }else {
       printf("a+b is %d\n",a+b);
    }
    return 0;
}
