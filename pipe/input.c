#include <stdio.h>

int main()
{
    int i,count=0,s=0;
    while(1){
	scanf("%d",&i);
	if(0==i) break;
        count++;
     	s+=i; 
    }
    printf("%d,%d\n",s,count);
    return 0;
}
