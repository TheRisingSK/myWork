#include<stdio.h>
int main(){

    int arr[30], i, sum=0, n;

    printf("Enter no of elements you want to enter :");
    scanf("%d",  &n);

    printf("Enter the array elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of array elements :%d\n", sum);
    return 0;
}
