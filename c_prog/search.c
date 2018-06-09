#include<stdio.h>
int main(){

    int arr[10], n, i;

    printf("Enter ten array elements :\n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search :");
    scanf("%d", &n);

    for(i=0;i<10;i++){
        if(arr[i]==n){
            printf("Number found !\n");
            break;
        }
    }
    return 0;
}
