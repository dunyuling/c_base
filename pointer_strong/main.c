#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char * get_input(void);
void get_input2(char *s);
void get_input3(char **s);
char *str_cat(char *dest,char *source);
void get_input4(char *s);
void  Print(char *arr[], int len);

int main()
{
    /* 这种情况是对的
    char *p = NULL;
    p = get_input();
    printf("main %p\n",p);
    if(p != NULL)
    {
        printf("main %s\n", p);
    }
    */

    /*调用返回后栈内存中的局部变量被释放
    char *p = NULL;
    printf("main %p\n",p);
    get_input2(p);
    printf("main %p\n",p);
    if(p != NULL)
    {
        printf("main %s\n", p);
    }
    */

    /*虽然能够正确得到结果,但是编译时有warning存在，不建议使用
    char **p = NULL;
    get_input3(&p);
    printf("main %p\n", p);
    if(p != NULL)
    {
        printf("main %s\n", p);
    }
    */

    /*
    char first[20] = "Hello";
    char *second = "123";
    char *result;
    result = str_cat(first,second);
    printf("result is %s\n",result);
    */

    /*
    printf("%zu,%zu\n",sizeof(char),sizeof(int*));
    char *buf[30];
    int i;
    for (i=0; i<30; i++)
    {
        buf[i] = (char*)malloc(20*sizeof(char));
        printf("%d\t%p\n",i,buf[i]);
        if (buf[i] == NULL)
        {
            printf("No enough memory!\n");
            exit(1);
        }
    }
    for (i=0; i<30; i++)
    {
        if(buf[i] != NULL)
        {
            free(buf[i]);
        }

    }
    */

    /*
    char str[80];
    char *p = NULL;
    p = str;
    get_input4(p);
    puts(p);
    */

    char *pArray[] = {"How","are","you"};
    //int   num = sizeof(pArray) / sizeof(char);
    int   num = sizeof(pArray) / sizeof(char*);
    printf("Total string numbers = %d\n", num);
    Print(pArray, num);
    return 0;
}

char *get_input()
{
    char *s = (char *)malloc(80);
    scanf("%s",s);
    printf("func %s\n",s);
    printf("func %p\n",s);
    return s;
}

void get_input2(char *s)
{
    s = (char *)malloc(80);
    scanf("%s",s);
    printf("func %s\n",s);
    printf("func %p\n",s);
}

void get_input3(char **s)
{

    *s = (char *)malloc(80);
    scanf("%s", *s);
    printf("func %s\n",*s);
    printf("func %p\n",*s);
}

char *str_cat(char *dest,char *source)
{
    unsigned int i;
    int dest_len = strlen(dest);
    for(i=0; i<strlen(source)+1; i++)
    {
        *(dest + dest_len + i) = *(source + i);
    }
    return dest;
}

void get_input4(char *s)
{
    assert(s!=NULL);
    scanf("%s",s);
    puts(s);
}

void  Print(char *arr[], int len)
{
    int  i;
    for (i=0; i<len; i++)
    {
        printf("%s,%p\n", arr[i],arr[i]);
    }
    printf("\n");
}
