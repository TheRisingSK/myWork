#include<stdio.h>
void passArray(int arr[], int len);
int main(){

        int arr[40], n, i;
        printf("Enter array element size :");
        scanf("%d", &n);

        printf("Enter %d array elements :\n",n);
        for(i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        passArray(arr, n);
        return 0;
}
void passArray(int arr[], int len){
    int i;
    printf("The array elements are :\n");
    for(i=0;i<len;i++){
        printf("%d\n", arr[i]);
    }
}
