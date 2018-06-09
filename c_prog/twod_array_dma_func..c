#include<stdio.h>

 void   arrOfPointerAccept(int *ptr[4],int *);
 void   arrOfPointerDisplay(int *ptr[4],int *);


 void   pointerToArrayofIntAccept(int (*ptr)[3],int r);
 void   pointerToArrayofIntDisplay(int (*ptr)[3],int r);

  void   pointerToPointerAccept(int **ptr,int r,int*);
 void   pointerToPointerDisplay(int **ptr,int r,int*);

void main()
{
    int *ptr[4],cols[4],i,j,(*ptr1)[3],no_of_stud,**ptr2;

   //using array of pointer
   /* for(i=0;i<4;i++)
    {
        printf("\nEnter no.of subject for student%d: ",i+1);
        scanf("%d",&cols[i]);
        ptr[i]=(int *)malloc(cols[i]*sizeof(int));

    }
    arrOfPointerAccept(ptr,cols);
    arrOfPointerDisplay(ptr,cols);*/




 /*   //using pointer to array of integers
     printf("\nEnter no.of students : ");
     scanf("%d",&no_of_stud);
    ptr1=(int **)malloc(no_of_stud*sizeof(int*));

    pointerToArrayofIntAccept(ptr1,no_of_stud);
    pointerToArrayofIntDisplay(ptr1,no_of_stud);

    free(ptr1);*/

    //using pointer to pointer notattion
     printf("\nEnter no.of students : ");
     scanf("%d",&no_of_stud);
     ptr2=(int **)malloc(no_of_stud*sizeof(int*));
    for(i=0;i<no_of_stud;i++)
    {

        printf("\nEnter no.of subject for student%d: ",i+1);
        scanf("%d",&cols[i]);

        ptr2[i]=(int *)malloc(cols[i]*sizeof(int));

    }
   // printf("\n\nPtr in fun main: %u",ptr2);
     pointerToPointerAccept(ptr2,no_of_stud,cols);

    /* for(i=0;i<no_of_stud;i++)
        for(j=0;j<cols[i];j++)
        printf("\n\n%d  ",ptr2[i][j]);*/

     pointerToPointerDisplay(ptr2,no_of_stud,cols);


    //free(ptr2);

}




void   arrOfPointerAccept(int *ptr[4],int *cols)
{
    int i,j;
     for(i=0;i<4;i++)
    {
        printf("\n\n\nEnter marks for student%d: ",i+1);
        for(j=0;j<cols[i];j++)
        {
            printf("\nEnter marks for subject%d: ",j+1);
            scanf("%d",&ptr[i][j]);

        }
    }
}

void   arrOfPointerDisplay(int *ptr[4],int *cols)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("\n\nMarks of subjects for student%d: ",i+1);

        for(j=0;j<cols[i];j++)
        {
            printf("\nMarks of subject%d: ",j+1);
            printf("%d\t",ptr[i][j]);
        }

    }
}


void   pointerToArrayofIntAccept(int (*ptr1)[3],int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("\nEnter marks for Student%d: ",i+1);
        for(j=0;j<3;j++)
        {
            printf("\nEnter marks for subject%d: ",j+1);
            scanf("%d",&ptr1[i][j]);
        }
    }
}
 void   pointerToArrayofIntDisplay(int ptr1[][3],int r)
 {
     int i,j;
      for(i=0;i<r;i++)
    {
        printf("\n\nMarks of subjects for student%d: ",i+1);

        for(j=0;j<3;j++)
        {
            printf("\nMarks of subject%d: ",j+1);
            printf("%d\t",ptr1[i][j]);
        }

    }
 }

 void   pointerToPointerAccept(int **ptr,int r,int *cols)
 {
     int i,j;
     printf("\n\nPtr in fun accept: %u",ptr);
     for(i=0;i<r;i++)
    {

        printf("\n\n\nEnter marks for student%d: ",i+1);

        for(j=0;j<cols[i];j++)
        {
            printf("\nEnter marks for subject%d: ",j+1);
           // scanf("%d",&ptr[i][j]);

          //  scanf("%d",(*(ptr+i)+j));

            scanf("%d",(ptr[i]+j));
        }
    }

 }
 void   pointerToPointerDisplay(int **ptr1,int r,int *cols)
 {
     int i,j;
   //  printf("\n\nPtr in fun Display: %u",ptr1);
    for(i=0;i<r;i++)
    {
        printf("\n\nMarks of subjects for student%d: ",i+1);

        for(j=0;j<cols[i];j++)
        {
            printf("\nMarks of subject%d: ",j+1);
            printf("%d\t",ptr1[i][j]);
           // printf("%d\t",*(*(ptr1+i)+j));
        }

    }
 }

