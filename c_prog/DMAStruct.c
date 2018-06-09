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
    int i,num;
   struct student *s1;

    printf("size of structure: %d",sizeof(s1));
    printf("\nHow many records? ");
    scanf("%d",&num);
    s1=(struct student*)malloc(num*sizeof(struct student));
    accept(s1,num);
    display1(s1,num);
}

void accept(struct  student s1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter Rno: ");
        scanf("%d",&s1[i].rno);
        printf("\nEnter Name: ");
        scanf("%s",s1[i].name);

        printf("\nEnter Birthdate: ");
        scanf("%d / %d / %d",&s1[i].bdate.dd,&s1[i].bdate.mm,&s1[i].bdate.yy);

    }
}


void display(struct  student s1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nRno: %d",s1[i].rno);
        //strcpy(s1.name,"smita");
        printf("\nName: %s",s1[i].name);
        printf("\nBirthdate: %d / %d / %d",s1[i].bdate.dd,s1[i].bdate.mm,s1[i].bdate.yy);
    }

}
void display1(struct  student *s1,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nRno: %d",(s1+i)->rno);
        //strcpy(s1.name,"smita");
        printf("\nName: %s",(s1+i)->name);
        printf("\nBirthdate: %d / %d / %d",(s1+i)->bdate.dd,(s1+i)->bdate.mm,(s1+i)->bdate.yy);
    }

}




