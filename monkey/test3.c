#include <stdio.h>
#include <math.h>

int main()
{
    int  z = 100;
    if((float)z/3 - 100<=fabs(1e-6)) {
	printf("sss");
    } else {
 	printf("ttt");
    }
    printf("%f\n",(float)z/3);
    printf("%f\n",fabs(1e-6));
    return 0;
}
