#include<stdio.h>
struct student{
    int rollno;
    char name[30];
    int total, m1, m2, m3, m4, m5, m6;
    float avg;
};
void accept(struct student *s1, int num);
void display(struct student *s1, int num);
void main()
{
        struct student *s1;
        int num;

        printf("How many records do you want : ");
        scanf("%d", &num);
        s1=(struct student*)malloc(num*sizeof(struct student));
        accept(s1,num);
        display(s1,num);
}

void accept(struct student *s1, int num)
{
        int i;
        for(i=0;i<num;i++){
            printf("\nEnter details for student : %d\n", i+1);
            printf("Enter rollno : ");
            scanf("%d", &(s1+i)->rollno);
            printf("Enter name : ");
            fflush(stdin);
            scanf("%[^\n]", (s1+i)->name);
            printf("Enter marks for six subjects :");
            scanf("%d %d %d %d %d %d", &(s1+i)->m1, &(s1+i)->m2, &(s1+i)->m3, &(s1+i)->m4, &(s1+i)->m5, &(s1+i)->m6);
            (s1+i)->total = ((s1+i)->m1 + (s1+i)->m2 + (s1+i)->m3 + (s1+i)->m4 + (s1+i)->m5 +(s1+i)->m6);
            (s1+i)->avg = ((s1+i)->total/6);
        }
}

void display(struct student *s1, int num)
{
        int i;
        printf("\n\nStudent details are :\n");
        printf("---------------------------");
        for(i=0;i<num;i++){
            printf("\n\nRollno :%d", (s1+i)->rollno);
            printf("\nName : %s", (s1+i)->name);
            printf("\nTotal marks : %d", (s1+i)->total);
            printf("\nAvarage = %f", (s1+i)->avg);
        }
}
