#include<stdio.h>
int main(){

    int arr[10], i;

    printf("Enter ten array elements :\n");;
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    printf("The reverse array elements are:\n");
    for(i=9;i>=0;i--){
        printf("%d\n", arr[i]);
    }
    return 0;
}
