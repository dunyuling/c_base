#include <stdio.h>
void fun(int, int, int(*f)(int, int));
int max(int, int);
int min(int, int);
int sum(int, int);

int pointer_func()
{
    int a, b;
    printf("please input two number:\n");
    scanf("%d,%d", &a, &b);
    fun(a, b, max);
    fun(a, b, min);
    fun(a, b, sum);
    return 0;
}

void fun(int x, int y, int (*f)(int a, int b))
{
    int result = (*f)(x, y);
    printf("%d\n", result);
}

int max(int x, int y)
{
    printf("max = ");
    return x > y ? x : y;
}

int min(int x, int y)
{
    printf("min = ");
    return x < y ? x : y;
}

int sum(int x, int y)
{
    printf("sum = ");
    return x + y;
}

