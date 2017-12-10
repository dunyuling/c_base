#include <stdio.h>

int main()
{
    char ch;
    printf("input a character:");
    ch = getchar();
    ch = ch + 32;
    putchar(ch);
    putchar('\n');

    return 0;
    

}
