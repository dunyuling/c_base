#include <stdio.h>

/*
typedef struct student
{
    int age;
    char name[10];
} Stu;
*/

typedef struct sample
{
    char m1;
    char m3;
    int m2;
}Sample;

typedef struct date
{
    int year;
    int month;
    int day;
}DATE;


typedef  struct  student
{
  long studentID;
  char studentName[10];
  char studentSex;
  DATE  birthday;
  int  score[4];
}STUDENT;

int main() {


    STUDENT stu1 = {100310121, "王刚", 'M', {1991,2,12}, {72,83,90,82}};
    printf("%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n",
           stu1.studentID,
           stu1.studentName,
           stu1.studentSex,
           stu1.birthday.year,
           stu1.birthday.month,
           stu1.birthday.day,
           stu1.score[0],
           stu1.score[1],
           stu1.score[2],
           stu1.score[3]);
    printf("%zu\n",sizeof(STUDENT));


    /*
    struct student stu1 = {12,"lhg"};
    printf("normal: age=%d,name=%s\n",stu1.age,stu1.name);

    struct student *stu_ = &stu1;
    printf(".: age=%d,name=%s\n",(*stu_).age,(*stu_).name);
    printf("->: age=%d,name=%s\n",stu_->age,stu_->name);

    printf("\n");
    struct student stu2[2] = {{13,"lb"},{15,"df"}};
    printf("1:age=%d,name=%s\n",stu2[0].age,stu2[0].name);
    printf("2:age=%d,name=%s\n",stu2[1].age,stu2[1].name);

    struct student *stu2_ = stu2;
    printf("pointer: 1: age=%d,name=%s\n",(*stu2_).age,stu2_->name);
    stu2_++;
    printf("pointer: 2: age=%d,name=%s\n",stu2_->age,(*stu2_).name);

    printf("\n");
    Stu *stu3_ = &stu1;
    printf("typedef: age=%d,name=%s\n",(*stu3_).age,stu3_->name);
    */
    return 0;
}
