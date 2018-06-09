#include<stdio.h>
int sumFun(int arr[], int);
int main(){
    int arr[10], res, i;

    printf("Enter ten numbers :");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    res = sumFun(arr, 10);
    printf("Sum=%d", res);
    return 0;
}
int sumFun(int arr[], int size){
    int i, sum=0;
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

