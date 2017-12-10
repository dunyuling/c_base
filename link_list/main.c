#include <stdio.h>
#include <stdlib.h>

struct stu
{
    int age;
    struct stu *temp;
};

int main()
{
    printf("%zu\n",sizeof(struct stu*));
    return 0;
}
