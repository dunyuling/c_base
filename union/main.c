#include <stdio.h>


union data {
    int a;
    char b;
    int c;
};

struct struct_ {
    int a;
    char b;
    int c;
};

int main() 
{
    union data data1;
    data1.a = 5;
//    data1.b = 'd';
    printf("%d\n",data1.a);
    printf("%p\n%p\n%p\n",&data1.a,&data1.b,&data1.c);
    printf("%lu\n",sizeof(data1));
    printf("%lu\n",sizeof(union data));

    printf("\n");
    struct struct_ struct_1;
    printf("%lu\n",sizeof(struct_1));
    printf("%lu\n",sizeof(struct struct_));
    return 0;
}
