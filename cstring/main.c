#include <stdio.h>

int main()
{
    char str1[]="hello";
    char *str2 = "world";
    char str3[10];
    scanf("%s",str3);
    str1[3]='\0';
    for(int i=0;i<7;i++) {
        printf("%c\n",str1[i]);
    }
    printf("str1 is %s\n",str1);
    printf("str2 is %s\n",str2);
    printf("str3 is %s\n",str3);
    return 0;
}
//  str2在代码段，而str1和str3在栈段，故str2不能接收键盘输入,str1和str3能
