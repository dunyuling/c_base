#include <stdio.h>
#include <math.h>

int main()
{
  float x1, x2;
    int a;
  do{
    printf("Input x1, x2:");
    a=scanf(" %f, %f", &x1, &x2);

    //要进行非法字符输入的判断，否则会造成死循环
    printf("%d\n",a);
    while(a!=2)
    {
        while(getchar() !='\n');  //用于清空缓冲区的其他字符
        printf("Input x1, x2:");
        a=scanf(" %f, %f", &x1, &x2);
    }

    while(!(fabs(x1-(int)x1)<1e-8 && fabs(x2-(int)x2)<1e-8)){
        while(getchar() !='\n');  //用于清空缓冲区的其他字符
        printf("Input x1, x2:");
        a=scanf("%f,%f", &x1, &x2);

    }
  //}while (x1 * x2 > 0);  当一个数为0时也会满足条件，所以应该加上对0的判读
  }while (x1 * x2 > 0||x1*x2==0);
  printf("x1=%d,x2=%d\n", (int)x1, (int)x2); 
  return 0;
}
