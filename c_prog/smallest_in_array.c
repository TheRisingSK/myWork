#include<stdio.h>
int main(){

    int arr[10], sm, i;

    printf("Enter ten array elements :\n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    sm=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<sm){
            sm = arr[i];
        }
    }
    printf("Smallest in array=%d", sm);
    return 0;
}
