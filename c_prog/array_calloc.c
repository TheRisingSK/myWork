#include<stdlib.h>
#include<stdio.h>
void main(){
    int num, i, *ptr;

    printf("How many elements :");
    scanf("%d", &num);
    ptr = (int *) calloc(num,sizeof(int));
    printf("Enter array elements :\n");
    for(i=0;i<num;i++){
        scanf("%d", ptr+i);
    }
    printf("Array elements are:\n");
    for(i=0;i<num;i++){
        printf("%d\n", *(ptr+i));
    }
    free(ptr);
}
