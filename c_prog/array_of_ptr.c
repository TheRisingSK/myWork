#include<stdio.h>
void main(){
    int arr []={1,2,3,4,5,6};
    int i, *ptr[6];

    for(i=0;i<6;i++){
        ptr[i]=&arr[i];
    }

    for(i=0;i<6;i++){
        printf("%d\n", *ptr[i]);
    }

}
