#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void file1();
void file2();
void file3_write();
void file3_read();
void file3_read_1(FILE *fp,char ch,long pos);
void file3_read_2(FILE *fp,char ch,long pos);
void file4_write();
void file4_read();
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
    //file4_write();
    //file4_read();
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

void file1()
{
    FILE *fp = fopen("file1.txt","w+");
    if(fp == NULL)
    {
        printf("file1.txt open failed");
        exit(0);
    }
    else
    {
        char s[20];
        int i;
        float f;
        char c;
        fprintf(fp, "%s\t%d\t%f\t%c","string",10,13.0,'x');
        fseek(fp,0,SEEK_SET);

        //fscanf(file,"%s",s);
        //fscanf(file,"%d",&i);
        //fscanf(file,"%f\t",&f);
        //fscanf(file,"%c",&c);
        fscanf(fp,"%s\t%d\t%f\t%c", s, &i, &f, &c);

        fclose(fp);
        printf("%s\t%d\t%f\t%c",s,i,f,c);
    }
}

void file2()
{
    FILE *fp = fopen("file2.txt","wb+");
    if(fp == NULL)
    {
        printf("file2.txt open failed");
        exit(0);
    }
    else
    {
        int i;
        fprintf(fp,"%d\n",123);

        fseek(fp,0,SEEK_SET);
        fscanf(fp,"%d",&i);
        printf("%d\n",i);
        if(fclose(fp) == 0)
        {
            printf("close successfully");
        }
    }
}

void file3_write()
{
    FILE *fp = fopen("file3.txt","w");
    if(fp == NULL)
    {
        printf("file3.txt open failed\n");
        exit(0);
    }
    else
    {
        char ch;
        ch = getchar();
        while(ch != '\n')
        {
            fputc(ch,fp);
            ch = getchar();
        }
        fclose(fp);
    }
}

void file3_read()
{
    FILE *fp = fopen("file3.txt","r");
    if(fp == NULL)
    {
        printf("file3.txt open failed\n");
        exit(0);
    }
    else
    {
        char ch = '\n';
        long pos = 0;
        file3_read_1(fp,ch,pos);
        //file3_read_2(fp ,ch ,pos);
        fclose(fp);
    }
}

void file3_read_1(FILE *fp,char ch,long pos)
{
    ch = fgetc(fp);
    while(ch != EOF)
    {
        pos = ftell(fp);
        printf("%c,%d,%ld\n", ch,ch,pos);
        ch = fgetc(fp);
    }
    printf("%ld\n",ftell(fp));
}

void file3_read_2(FILE *fp,char ch,long pos)
{
    while(!feof(fp))
    {
        ch = fgetc(fp);
        pos = ftell(fp);
        printf("%c,%d,%ld\n", ch,ch,pos);
    }
    printf("%ld\n",ftell(fp));
}

void file4_write()
{
    FILE *fp = fopen("file4.txt","w");
    if(fp == NULL)
    {
        printf("file4.txt open failed");
        exit(0);
    }
    char ch[20];
    int i=0;
    while(i<3)
    {
        fgets(ch,sizeof(ch),stdin);
        fputs(ch,fp);
        i++;
    }
    fclose(fp);
}

void file4_read()
{
    FILE *fp = fopen("file4.txt","r");
    if(fp == NULL)
    {
        printf("file4.txt open failed");
        exit(0);
    }
    char ch[20];
    fseek(fp,0,SEEK_SET);
    fgets(ch,sizeof(ch),fp);


    ///*
    if(ch[0] == '\0')
    {
        printf("====\n");
    }
    else
    {
        printf("c:%c\n", ch[0]);
    }
    //*/
    fputs(ch,stdout);
    //puts(ch);
    printf("sss\n");
    fclose(fp);
}
