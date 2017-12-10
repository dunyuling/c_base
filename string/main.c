#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_LEN 10
unsigned int myLen(const char *pStr);
unsigned int myLen2(const char a[]);
void myCpy(char *dest, const char *src);

#define  ARR_SIZE  5
void  YH(int a[][ARR_SIZE], int  n);
void  PrintYH(int a[][ARR_SIZE], int  n);

char *Fun()
{
  char str[STR_LEN+1];
  char *s = str;
  scanf("%s", s);
  return s;
}


void YH(int a[][ARR_SIZE], int n)
{
        int  i, j ;
        for (i=0; i<n; i++)
        {
             a[i][0] = 1;
             a[i][i] = 1;
        }
         for (i=2; i<n; i++)
        {
            for (j=1; j<i; j++)
            {
                 a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
}
void PrintYH(int a[][ARR_SIZE], int n)
{
        int i , j ;
        for (i=0; i<n; i++)
        {
            for (j=0; j<=i; j++)
            {
                printf("%4d", a[i][j]);
            }
             printf("\n");
        }
}

//字符串相关知识，测试得时候打开相应注释即可，以/* */为范围
int main()
{

    /*
    int i;
    //char s[5]={"ABCDE"};
    //char s[5]={'A', 'B', 'C', 'D', 'E'};
    char *s="ABCDE";

    for(i=0;s[i]!='\0';i++)
    {
       // printf("%c\t%d\n",s[i],i);
        printf("%c\n",s[i]);

    }
    printf("i=%d\t%c\n",i,s[i]);
    */


    /*
    char  str[] = {'F','O','R','T','R','A','N',0};
    printf("%zu\n",strlen(s));
    */

    /*
        int  a[ARR_SIZE][ARR_SIZE];
        YH(a, ARR_SIZE);
        PrintYH(a, ARR_SIZE);
    */


    /*
    char *p = Fun();
    printf("%s\t%p",p,p);
    */

    /*
    char input[8], secret[] = "secret";
    while(1)
    {
        printf("please input the password:");
        scanf("%s",input);
        if(strcmp(secret,input) == 0)
        {
            printf("welcome\n");
            break;
        }
        else
        {
            printf("sorry\n");
        }
    }
    */

    /*
    char a,b;
    int c,d;
    printf("%p,%p,%p,%p\n",&a,&b,&c,&d);
    scanf(" %c",&a);
    scanf(" %c",&b);
    scanf(" %d",&c);
    scanf(" %d",&d);
    printf("%c,%c,%c,%c",a,b,c,d);
    */


    /*
    //char str[STR_LEN + 1];

    //scanf("%s",str);
    //printf("%s\n",str);
    //printf("====");

    //fgets(str,12,stdin);
    //scanf("%s",str);
    //printf("%s\n",str);

    //char ch;
    //scanf(" %c",&ch);
    //printf("%c\n",ch);
    */


    /*
    char *p = str;
    fgets(str, 12, stdin);
    printf("%s\n", p);
    printf("%p\n", p);
    printf("%p\n", &str);
    printf("%s\n",str);
    */


    /*
    int a[2] = {1,2};
    int *p = a;;
    printf("%d\n",p[0]);
    printf("%p\n",p);
    printf("%p\n",&a);
    printf("%d\n",a[0]);
    */


    /*
    char *a = "main(){char*a=%c%s%c;printf(a,34,a,34);}";
    printf(a,34,a,34);
    printf("\naaaa "
           "bbbb\n");

    //char str1[6] = {'C','h','i','n','a','\0'};
    //char str1[] = {"China"};
    //char str1[] = "China";
    char str1[4] = "China";
    printf("%s\n",str1);
    */



    /*
    char *pStr = "ab";
    *pStr = "bc";
    printf("%s\n",pStr);
    */


    /*
    char a = "bc";
    char str[] = "hello";
    str = a;
    */


    /*
    char a[] = "hello";
    char *pStr = a;
    printf("%s\n", pStr);
    a[0] = 'c';
    *pStr = 'd';
    *pStr = 'f';
    printf("%s\n", pStr);
    */

    /*
    char a[] = "hello";
    printf("%zu,%zu\n",strlen(a),sizeof(a));

    char b[15] = "hello";
    char c[6] = "world";
    strcpy(b,c);
    printf("%s,%zu,%zu\n",b,sizeof(b),strlen(b));
    strncpy(b,"thanks",3);
    printf("%s,%zu,%zu\n",b,sizeof(b),strlen(b));

    printf("%d\n",strcmp("computer","compare"));
    printf("%d\n",strncmp("computer","compare",4));

    strcat(b,"china is ");
    printf("%s,%zu,%zu\n",b,sizeof(b),strlen(b));
    memset(b,0,sizeof(b));
    strncat(b,"china is " ,5);
    printf("%s,%zu,%zu\n",b,sizeof(b),strlen(b));

    printf("%zu\n",strlen("\0hello"));
    */

    /*
    char a[] = "\0hello";
    char *pStr = a;
    printf("%u\n",myLen(pStr));
    printf("%u\n",myLen2(a));

    char b[] = "world";
    char *pStr2 = b;
    myCpy(pStr,pStr2);
    printf("%s,%zu\n",a,sizeof(pStr));
    */


    return 0;
}

unsigned int myLen(const char *pStr)
{
    const char *start = pStr;
    while(*pStr)
    {
        pStr++;
    }
    return pStr - start;
}

unsigned int myLen2(const char a[])
{
    int i,len = 0;
    for(i=0;i!='\0';i++)
    {
        len++;
    }
    return len;
}

void myCpy(char *dest, const char *src)
{
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    //while(*dest++=*src++) ;
}
