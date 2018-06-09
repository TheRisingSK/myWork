#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr[4], cols[4], i, j,(*ptr1)[3] no_of_stud, **ptr;


    printf("Enter no of student :");
    scanf("%d", &no_of_stud);
    ptr1 = (int **) malloc(no_of_stud*sizeof(int));
    for(i=0;i<no_of_stud;i++){
        printf("Enter marks for student %d:", i+1);
        for(i=0;j<3;j++){
            printf("Enter marks for subject %d:", j+1);
            scanf("%d", &ptr1[i][j]);
        }
    }

}
