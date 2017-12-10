#include <stdio.h>

struct student {
    int age;
    int weight;
    struct student *next;
};
 
int main()
{
    struct student a,b,c,*head;
    a.age = 1;
    a.weight = 1;
    b.age = 2;
    b.weight = 2;
    c.age = 3;
    c.weight = 3;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    //struct student *p = head;
    struct student *p = &a;
    while(p != NULL) {
	printf("age=%d,weight=%d\n",p->age,(*p).weight);
        p = p->next;
    }
    return 0;
}
