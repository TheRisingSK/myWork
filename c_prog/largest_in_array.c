#include<stdio.h>
int main(){

    int arr[10], lr, i;

    printf("Enter ten array elements :\n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    lr=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>lr){
            lr = arr[i];
        }
    }
    printf("Largest in array=%d", lr);
    return 0;
}
