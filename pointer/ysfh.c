#include <stdio.h>
#define STEP 100

//约瑟夫环
void ysfh()
{
    int a[STEP+1] = {0};
    int count = 0, i = 0, step = 0;

    while(count != 99)
    {
        for(step=1;step<=STEP;step++)
        {
            if(a[step]!=1)
            {
                i++;
                if(i%5==0)
                {
                    a[step] = 1;
                    count++;
                }
            }
        }
    }

    for(i=1;i<=STEP;i++)
    {
        if(a[i] == 0)
        {
            printf("%d\n", i);
        }
    }
}



