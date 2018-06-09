#include<stdio.h>
void main()
{
    int *ptr[4],cols[4],i,j,(*ptr1)[3],no_of_stud,**ptr2;
   /*
   //using array of pointer
    for(i=0;i<4;i++)
    {
        printf("\nEnter no.of subject for student%d: ",i+1);
        scanf("%d",&cols[i]);
        ptr[i]=(int *)malloc(cols[i]*sizeof(int));
        for(j=0;j<cols[i];j++)
        {
            printf("\nEnter marks for subject%d: ",j);
            scanf("%d",&ptr[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        printf("\n\nMarks of subjects for student%d: ",i+1);

        for(j=0;j<cols[i];j++)
        {
            printf("\nMarks of subject%d: ",j);
            printf("%d\t",ptr[i][j]);
        }

    }
    free(ptr2);
    */

   /* //using pointer to array of integers
     printf("\nEnter no.of students : ");
     scanf("%d",&no_of_stud);
        ptr1=(int **)malloc(no_of_stud*sizeof(int*));
    for(i=0;i<no_of_stud;i++)
    {
        printf("\nEnter marks for Student%d: ",i+1);
        for(j=0;j<3;j++)
        {
            printf("\nEnter marks for subject%d: ",j+1);
            scanf("%d",&ptr1[i][j]);
        }
    }

    for(i=0;i<no_of_stud;i++)
    {
        printf("\n\nMarks of subjects for student%d: ",i+1);

        for(j=0;j<3;j++)
        {
            printf("\nMarks of subject%d: ",j+1);
            printf("%d\t",ptr1[i][j]);
        }

    }
    free(ptr1);
    */
    //using pointer to pointer notattion
     printf("\nEnter no.of students : ");
     scanf("%d",&no_of_stud);
        ptr1=(int **)malloc(no_of_stud*sizeof(int*));
    for(i=0;i<no_of_stud;i++)
    {

        printf("\nEnter no.of subject for student%d: ",i+1);
        scanf("%d",&cols[i]);
        ptr[i]=(int *)malloc(cols[i]*sizeof(int));
        for(j=0;j<cols[i];j++)
        {
            printf("\nEnter marks for subject%d: ",j+1);
            //scanf("%d",(ptr1[i]+j));
            scanf("%d",(*(ptr1+i)+j));
        }
    }

    for(i=0;i<no_of_stud;i++)
    {
        printf("\n\nMarks of subjects for student%d: ",i+1);

        for(j=0;j<cols[i];j++)
        {
            printf("\nMarks of subject%d: ",j+1);
           // printf("%d\t",*(ptr1[i]+j));
            printf("%d\t",*(*(ptr1+i)+j));
        }

    }
    free(ptr2);

}
