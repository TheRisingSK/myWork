#include<stdio.h>
struct date1
{
    int dd,mm,yy;
};

/*struct student
{
    int rno;
    char name[20];
    struct date bdate;

};//s1={.rno=12,.name="khushbu",.bdate.dd=10,.bdate.mm=6,.bdate.yy=2017};
*/

struct student
{
    int rno;
    char name[20];
    struct date
    {
        int dd,mm,yy;
    }bdate;//={1,2,2017};

};
struct student accept(struct student);
void accept1(struct student *s1);
void display(struct student);


void main()
{
   struct student s1={.rno=12,.name="khushbu",.bdate.dd=10,.bdate.mm=6,.bdate.yy=2017};
    //s1=accept(s1);//call by value
    accept1(&s1);
    display(s1);
}

struct student accept(struct student s1)
{

    printf("\nEnter Rno: ");
    scanf("%d",&s1.rno);
    printf("\nEnter Name: ");
    scanf("%s",s1.name);

    printf("\nEnter Birthdate: ");
    scanf("%d / %d / %d",&s1.bdate.dd,&s1.bdate.mm,&s1.bdate.yy);
    return s1;
}
void accept1(struct student *s1)
{

    printf("\nEnter Rno: ");
    scanf("%d",&s1->rno);
    printf("\nEnter Name: ");
    scanf("%s",s1->name);

    printf("\nEnter Birthdate: ");
    scanf("%d / %d / %d",&s1->bdate.dd,&s1->bdate.mm,&s1->bdate.yy);

}
void display(struct student s1)
{
    printf("size of structure: %d",sizeof(s1));
    printf("\nRno: %d",s1.rno);

    printf("\nName: %s",s1.name);
    printf("\nBirthdate: %d / %d / %d",s1.bdate.dd,s1.bdate.mm,s1.bdate.yy);
}



typedef int RollNo;
int a,b,c;
RollNo a,b,c;


