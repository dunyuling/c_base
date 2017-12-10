#include <stdio.h>
#include <math.h>

int main()
{
  int n, i,flag = 0;
  printf("Input n:");
  scanf("%d", &n);
  if(fabs(n-(int)n)<1e-8) {
  int k =sqrt(n);
  for (i=2; i<=k&&!flag; i++)
  {
     if(n==0|| n== 1 || n < 0) {
	flag = 0;
     } else if(n % i == 0)
     {
       flag =1;
     }
  }

   if(flag) {
       printf("No!\n");
   } else {
      printf("Yes!\n");
   }
 } else {

    printf("n 不是整数\n");
  }
  return 0;
}
