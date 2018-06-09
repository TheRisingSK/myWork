#include<stdio.h>
struct employee{
    int eid;
    char name[30];
    int bs, hra, da;
    float gs;
};
void accept(struct employee s1[], int num);
void display(struct employee s1[], int num);
void main()
{
        struct employee *s1;
        int num;

        printf("How many records do you want : ");
        scanf("%d", &num);
        s1 = (struct employee*) malloc(num* sizeof(struct employee));
        accept(s1,num);
        display(s1,num);
}

void accept(struct employee *s1, int num)
{
        int i;
        for(i=0;i<num;i++){
            printf("Enter employee id for %d : ", (i+1));
            scanf("%d", &(s1+i)->eid);
            printf("Enter employee name :");
            fflush(stdin);
            scanf("%[^\n]", (s1+i)->name);
            printf("Enter basic salary :");
            scanf("%d", &(s1+i)->bs);
            (s1+i)->da = ((s1+i)->bs * 0.10f);
            (s1+i)->hra = ((s1+i)->bs * 0.15f);
            (s1+i)->gs = ((s1+i)->da) + ((s1+i)->hra) + ((s1+i)->bs);

        }
}

void display(struct employee *s1, int num)
{
        int i;
        printf("\n\nemployee details are :\n");
        printf("---------------------------");
        for(i=0;i<num;i++)
        {
            printf("\nEmployee id :%d", (s1+i)->eid);
            printf("\nEmployee name :%s", (s1+i)->name);
            printf("\nBasic Salary : %d", (s1+i)->bs);
            printf("\nGross Salary : %f", (s1+i)->gs);
        }
}
