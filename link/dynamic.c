#include <stdio.h>
#include <malloc.h>

struct student {
    int age;
    int weight;
    struct student *next;
};

struct student * create() {
    struct student *head;
    struct student *pre,*new;
    int n = 0;

    printf("size=%lu\n",sizeof(struct student));
    new = (struct student *)malloc(sizeof(struct student));
    scanf("%d,%d",&(new->age),&(new->weight));
    printf("age=%d,weight=%d\n",new->age,new->weight);
    printf("%p,%p\n",new,&new);

    while(new->age != 0) {
        n++;
        if(n==1) head = new;
        else pre->next = new;

        pre = new;
        new = (struct student *)malloc(sizeof(struct student));
        scanf("%d,%d",&(new->age),&(new->weight));
        printf("age=%d,weight=%d\n",new->age,new->weight);
        printf("%p,%p\n",new,&new);
    }
    free(new);
    pre->next = NULL;
    return head;
}
 
int main()
{
    struct student *p = create();
    printf("\n");
    while(p != NULL) {
	printf("age=%d,weight=%d,p=%p,&p=%p\n",p->age,(*p).weight,p,&p);
        p = p->next;
    }
    return 0;
}
