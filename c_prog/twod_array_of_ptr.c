#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr[4] , cols[4], i, j;

    for(i=0;i<4;i++){
        printf("Enter subjects for student %d:", i+1);
        scanf("%d", &cols[i]);
        ptr[i] = (int *) malloc(cols[i]*sizeof(int));
        for(j=0;j<cols[i];j++){
            printf("\nEnter marks for subject %d:", j+1);
            scanf("%d", &ptr[i][j]);
        }
    }

    for(i=0;i<4;i++){
        printf("\nMarks for student %d:", i+1);
        for(j=0;j<cols[i];j++){
            printf("%d\t", ptr[i][j]);
        }
    }
}
