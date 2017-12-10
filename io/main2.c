#include <stdio.h>

int main()
{
    fprintf(stdout,"hello c\n");
    int a;
    fscanf(stdin,"%d",&a);
    if(a>0) {
        fprintf(stderr,"the input value is %d, it is error\n",a);
	return a;
    } else {
 	fprintf(stdout,"the input value is %d\n",a);		
    }
    return 0;
}
