#include"employee.h"



employee accept()
{
    employee e;
    int ch;
    char temp[30];
    printf("\nEnter Eid: ");
    scanf("%d",&e.eid);
    printf("\nEnter name: ");
    fflush(stdin);
    gets(temp);
    e.name=(char*)malloc(strlen(temp)+1);
    strcpy(e.name,temp);

    printf("\nEnter Joining date: ");
    scanf("%d%d%d",&e.join_date.dd,&e.join_date.mm,&e.join_date.yy);
    printf("\nSelect Department from following list of department: ");
    printf("\n1.SALES\n2.MARKETING\n3.FINANCE\n4.PRODUCTION\n");
    scanf("%d",&e.dept);

    printf("\nSelect any choice(1/2) from the following for Contact:\n1. Contact number\n2.address: \n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\nEnter Contact number: ");
        fflush(stdin);
        gets(e.con.phNo);
    }
    else
    {
        printf("\nEnter Address: ");
        fflush(stdin);
        gets(e.con.address);
    }
    return e;
}
 void display(employee e)
 {
      printf("\n-------------------------------\n");
    printf("\nEmployee details: \n");
    printf("\nId: %d",e.eid);
    printf("\nname: %s",e.name);
    printf("\nJoining date: %d / %d / %d",e.join_date.dd,e.join_date.mm,e.join_date.yy);
    printf("\nDepartment : ");
    switch(e.dept)
    {
        case 1:printf("\nSales");
        break;
        case 2:printf("\nMarketing");
        break;
        case 3:printf("\nFinance");
        break;
        case 4:printf("\nProduction");
        break;
        default:printf("\nInvalid choice..");
        break;

    }
      printf("\nContact(address/phone number): %s", e.con.address);

 }
