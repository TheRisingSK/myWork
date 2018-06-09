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

void main()
{
    int i;
   struct student s1[4]={{1,"Santosh",1,2,2012},{2,"Khushbu",1,2,2012},{3,"Smita",1,2,2012}};

    printf("size of structure: %d",sizeof(struct student));

    accept(s1);
    display1(s1);
}

void accept(struct  student s1[])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter Rno: ");
        scanf("%d",&s1[i].rno);
        printf("\nEnter Name: ");
        scanf("%s",s1[i].name);

        printf("\nEnter Birthdate: ");
        scanf("%d / %d / %d",&s1[i].bdate.dd,&s1[i].bdate.mm,&s1[i].bdate.yy);

    }
}


void display(struct  student s1[])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nRno: %d",s1[i].rno);
        //strcpy(s1.name,"smita");
        printf("\nName: %s",s1[i].name);
        printf("\nBirthdate: %d / %d / %d",s1[i].bdate.dd,s1[i].bdate.mm,s1[i].bdate.yy);
    }

}
void display1(struct  student *s1)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nRno: %d",(s1+i)->rno);
        //strcpy(s1.name,"smita");
        printf("\nName: %s",(s1+i)->name);
        printf("\nBirthdate: %d / %d / %d",(s1+i)->bdate.dd,(s1+i)->bdate.mm,(s1+i)->bdate.yy);
    }

}



