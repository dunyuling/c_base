
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10

int bubble()
{
    int i,j;
	int a[LENGTH] = {0,1,2,3,4,5,6,7,9,8};
	char flag = 0;//是否交换的标志，初始化为0
	int temp;
	int count = 0;
	for(i = 0;i< LENGTH - 1;i++)
	{
		for(j = 1;j< LENGTH - i;j++)
		{
			if(a[j-1] > a[j])
			{
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
				flag = 1;//标记作了交换
				count++;
			}
		}
		if(0 == flag)//一次循环下来没有交换，表明排序已经完成
		{
			printf("交换的趟数为：%d\n",count);//打印交换的总趟数
			break;
		}
		flag = 0;//清除flag标志，为下一趟排序做准备
	}
	for(i = 0;i < LENGTH;i++)
	    printf("%d ",a[i]);
	return 0;
}
