#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fwrite_read_1();
void fwrite_read_2();

struct st
{
    char name[8];
    int num;
    float s[4];
} stu[50];


int main()
{
    fwrite_read_1();
    return 0;
}

void fwrite_read_1()
{
    FILE *fpw = fopen("aaa","w");
    int i,j;
    for(i=0; i<50; i++)
    {
        strcpy(stu[i].name,"lhg");
        stu[i].num = i;
        for(j=0; j<4; j++)
        {
            stu[i].s[j] = j;
        }
    }

    //for(i=0; i<50; i++)
    {
        fwrite(stu,25*sizeof(struct st),2,fpw);
    }
    fclose(fpw);


    struct st dest[50];
    FILE *fpr = fopen("aaa","r");
    for(i=0; i<50; i++)
    {
        fread(dest,sizeof(struct st),50,fpr);
    }

    for(i=0; i<50; i++)
    {
        printf("%d,%d,%s,%f,%f,%f,%f\n",i,dest[i].num,dest[i].name,dest[i].s[0],dest[i].s[1],dest[i].s[2],dest[i].s[3]);
    }
    fclose(fpr);
}


void fwrite_read_2()
{
    FILE *fpw = fopen("aaa","w");
    int i;
    int source[50];
    for(i=0; i<50; i++)
    {
        source[i] = i;
    }

    //for(i=0; i<50; i++)
    {
        fwrite(source,sizeof(int),50,fpw);
    }
    fclose(fpw);


    int dest[50] = {0};
    FILE *fpr = fopen("aaa","rb");
    for(i=0; i<50; i++)
    {
        fread(dest,sizeof(int),1,fpr);
    }
    for(i=0; i<50; i++)
    {
        printf("%d,%zu,%d\n",dest[i],sizeof(dest),i);
    }
    fclose(fpr);
}