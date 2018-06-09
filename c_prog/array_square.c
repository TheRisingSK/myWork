#include<stdio.h>
int main(){

    int arr[10], i ;

    printf("Enter ten numbers :");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<10;i++){
        printf("Element=%d, Square=%d\n", arr[i], (arr[i]*arr[i]));
    }
    return 0;
}
