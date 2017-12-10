#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void oneDimensional(void);
void twoDimensional(void);
void twoDimensional2(void);

#define STUD   30            //最多可能的学生人数
#define COURSE 5
void  total(int *score, int sum[], float aver[], int m, int n);
void  print(int *score, int sum[], float aver[], int m, int n);
void total_print(void);

#define   M  150 /* 最多的字符串个数 */
#define   N  200 //最多参赛国数
void sort_str(char *p[],int n);
void point_array_demo(void);
void point_array_demo2(void);

int main()
{
    twoDimensional2();
    //total_print();


    int array[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i=2,j=3;
    //printf("%d\n",*(array[i] + j));
    printf("%d\n",*(*array + i*4+j));

    return 0;
}

void point_array_demo()
{
    char *p[] = {"America","England","Australia","China","Finland"};
    printf("%p\n",p);
    int i;
    for(i=0;i<5;i++)
    {
        //printf("%s\t%p\t%zu\n",*(p+i),p+i,sizeof(*(p+i)));
        printf("%s\t%p\t%p\t%zu\n",p[i], p[i],&p[i],sizeof(*(p+i)));
    }
    printf("\n");

    sort_str(p,5);
     for(i=0;i<5;i++)
    {
        //printf("%s\t%p\t%zu\n",*(p+i),p+i,sizeof(*(p+i)));
        printf("%s\t%p\t%p\t%zu\n",p[i], p[i],&p[i],sizeof(*(p+i)));
    }
    printf("\n");


    char str[][10] = {"America","England","Australia","China","Finland"};
    for(i=0;i<5;i++)
    {
        printf("%s\t%p\t%p\t%zu\n",str[i],str[i],&str[i],sizeof(str[i]));
    }
}

//指针数组的例子
void point_array_demo2()
{
    int    i, n;
    char   *pStr[M];
    //char str[N][M]; //定义一个二维字符数组存放参赛国家名字符串
    printf("How many countries?");
    scanf("%d",&n);
    getchar();        /* 读走输入缓冲区中的回车符 */
    printf("Input their names:\n");
    for (i=0; i<n; i++)
    {
        pStr[i]=malloc(sizeof(int)*50);
        scanf(" %s",pStr[i]);  /* 输入n个字符串 */

        //scanf(" %s",str[i]);  /* 输入n个字符串 */
        //pStr[i] = str[i]; // 把二维数组行指针赋值给字符指针数组
    }
    sort_str(pStr, n); /* 字符串按字典顺序排序 */
    printf("Sorted results:\n");
    for (i=0; i<n; i++)
    {
        //puts(pStr[i]);  /* 输出排序后的n个字符串 */
        printf("%s\t%p\t%p\t%zu\n",pStr[i],pStr[i],&pStr[i],sizeof(pStr[i]));
    }
}

void sort_str(char *p[],int n)
{
    int i,j;
    char *temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(p[i],p[j])>0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void total_print()
{
    int i, j, m, n, score[STUD][COURSE], sum[STUD];
    float   aver[STUD];
    printf("Enter the total number of students and courses:");
    scanf("%d %d",&m,&n);
    printf("Enter score\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf(" %d", &score[i][j]);
        }
    }
    total(*score, sum, aver, m, n);
    print(*score, sum, aver, m, n);
}

void  total(int *score, int sum[], float aver[], int m, int n)
{
    int  i, j;
    for (i=0; i<m; i++)
    {
        sum[i] = 0;
        for (j=0; j<n; j++)
        {
            sum[i] = sum[i] + *(score + i * COURSE + j);
        }
        aver[i] = (float) sum[i] / n;
    }
}
void  print(int *score, int sum[], float aver[], int m, int n)
{
    int  i, j;
    printf("Result:\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d\t", *(score + i * COURSE + j));
        }
        printf("%5d\t%6.1f\n", sum[i], aver[i]);
     }
}

void oneDimensional()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = a, i;
    printf("base:\n");
    for(i=0;i<5;i++)
    {
        printf("%d,%p\t",a[i],&a[i]);
    }
    printf("\n array head deviate: \n");
    for(i=0;i<5;i++)
    {
        printf("%d,%p\t",*(a+i),(a+i));
    }
    printf("\n point deviate: \n");
    for(i=0;i<5;i++)
    {
        printf("%d,%p\t",*(p+i),(p+i));
    }
    printf("\n point as array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d,%p\t",p[i],&p[i]);
    }
    printf("\n point self increase:\n");
    p = a;
    for(;p<a+5;p++)
    {
        printf("%d,%p\t",*p,p);
    }
    printf("\n");
    p = a;
    printf("%d\t",*++p);
    printf("%p\t",p);
    printf("\n");
    printf("%zu,%zu\n",sizeof(a),sizeof(p));
    //printf("%d\t%p\t", (*(p++)), (p));
}

//treat as two dimensional array : arrow point: int (*p)[3] = a; a[i][j] <----> *(*(p+i)+j)
void twoDimensional()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3] = a;
    int i,j;
    printf("base:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t",a[i][j],&a[i][j]);
        }
        printf("\n");
    }

    printf("\n array head deviate: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t",(*(a+i))[j],&( *(a+i))[j] );
        }
        printf("\n");
    }

    printf("\n point deviate: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t",(*(p+i))[j],&(*(p+i))[j]);
        }
        printf("\n");
    }

    printf("\n point deviate strengthen: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t",*(*(p+i)+j), *(p+i)+j);
        }
        printf("\n");
    }

    printf("\n point as array: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t",p[i][j],&p[i][j]);
        }
        printf("\n");
    }

    printf("\n point self increase:\n");
    p = a;
    for(;p<a+2;p++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t", ((*p)[j]), &((*p)[j]) );
        }
        printf("\n");
    }

     printf("\n point self increase strengthen:\n");
    p = a;
    for(;p<a+2;p++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%p\t", *(*p+j), *p+j);
        }
        printf("\n");
    }
}

//treat as one dimensional array :column point  int *p = *a; a[i][j]  <----> *(p+i*n+j)
void twoDimensional2()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    //int *p = &a[0][0];
    //int *p = *(a + 0) + 0;
    //int *p = a[0];
    int *p = *a;
    printf("%p\t%p\t%p\t%p\t%p\n",a,&a,a[0],&a[0],&a[0][0]);
    printf("%p\t%d\t%d\t%d\n", *a, *(a[0]), *(a[0]+1),a[0][0]);

    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            //printf("%d,%p\t", *(p+i*3+j), (p+i*3+j));
            printf("%d,%p\t", p[i*3+j], &p[i*3+j]);
        }
        printf("\n");
    }

}
