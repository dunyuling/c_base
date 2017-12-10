#include <stdio.h>
int main( )
{ 
    char k; 
    int i;
    for(i=1;i<3;i++)
    { 
        scanf("%c",&k);
        getchar();
        switch(k)
        { 
            case '0': printf("another\n");
            case '1': printf("number\n");
        }
   }
   return 0;
}
