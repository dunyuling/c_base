#include <stdio.h>
#include <stdlib.h>
#include "out_of_bound.h"
#include <string.h>

int FindMax(int score[], int n);



struct tag
{
    int a[10];
}x,y;

struct tag retArray()
{
    int i=0;
    for(i=0;i<10;i++)
        x.a[i]=i;
    return x;
}

int main()
{
    //oob1();
    //oob2();
    //oob3();
    //oob4();
    //oob5();

    int score[3] = {80,90,100};
    int result = FindMax(score,3);
    //printf("%d,%d\n",result[0],result[1]);
    printf("%d\n",result);


    struct tag z=retArray();
    printf("%d\n",z.a[3]);

    return 0;
}


int FindMax(int score[], int n)
{
  int max, i;
  max = score[0];
  for (i=1; i<n; i++)
  {
     if (score[i] > max)
    {
      max = score[i];
    }
   }
  printf("%d\n",i);
  return max;
}


/*
int FindMax(int score[], int n)
{
  int max, i;
  int imax[2]={0};
  max = score[0];
  for (i=1; i<n; i++)
  {
    if (score[i] > max)
    {
      max = score[i];
    }
    imax[0] = i;
    imax[1] = max;
  }
  return imax;
}
*/
