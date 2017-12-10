#include <stdio.h>
int main()
{ 
  int k;
  scanf("%d",&k);
  switch(k)
  { 
     case 1:   printf("%d",k++);
     case 2:   printf("%d",k++);
     case 3:   printf("%d",k++);
               break;
     default:  printf("Full!");
  } 
  return 0;
}
