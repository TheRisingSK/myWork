#include"student.h"

student accept(){

    student s;
    char ch;
    char temp [30];

    printf("\nEnter rollno :");
    scanf("%d",&s.rollno);

    printf("\nRoll no in accept: %d",s.rollno);
    printf("\nEnter name :");
    fflush(stdin);
    gets(temp);
    s.name=(char*)malloc(strlen(temp)+1);
    strcpy(s.name, temp);

    printf("\nEnter admission date :");
    scanf("%d%d%d", &s.admission_date.dd, &s.admission_date.mm, &s.admission_date.yy);

    printf("\nSelect branch from following list of branches :");
    printf("\n1.IT\n2.CS\n3.ENTC\n4.MECH\n5.CIVIL\n6.MCA\n");
    scanf("%d", &s.field);

    printf("\nSelect Contact means :\n1).Mobile\n2.Email\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\nEnter mobile number: ");
        fflush(stdin);
        gets(s.con.mobile);
    }
    else
    {
        printf("\nEnter Email Address: ");
        fflush(stdin);
        gets(s.con.email);
    }
    return s;
}
 void display(student s)
 {

    printf("\nStudent details: \n");
    printf("\nRoll no in display: %d",s.rollno);
   // printf("\nRoll No: %d",s.rollno);
    printf("\nName: %s",s.name);
    printf("\nAdmission Date: %d/%d/%d",s.admission_date.dd,s.admission_date.mm,s.admission_date.yy);
    printf("\nBranch : ");
    switch(s.field)
    {
        case 1:printf("IT");
        break;
        case 2:printf("CS");
        break;
        case 3:printf("ENTC");
        break;
        case 4:printf("MECH");
        break;
        case 5:printf("CIVIL");
        break;
        case 6:printf("MCA");
        break;
        default:printf("\nInvalid choice..");
        break;

    }
      printf("\nContact details : %s", s.con.email);

 }
