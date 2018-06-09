#include<stdio.h>
int main(){

    int n, arr[50], first, last, mid, i , j, elem, temp;

    printf("How many numbers you want to enter : ");
    scanf("%d", &n);

    //accept number of elements
    printf("Enter %d elements :\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    //sort the given numbers
    for(i=1;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Enter number to search : ");
    scanf("%d", &elem);
    first = 0;
    last = n-1;
    mid = (first+last) / 2;
    while(first<=last){

            if(arr[mid]<elem){
                first = mid + 1;
            }
            else if(arr[mid]==elem){
                printf("Number found :%d", elem);
                break;
            }
            else{
                last = mid -1;
            }
            mid = (first + last) /2;
    }
    if(first>last){
        printf("Number is not present !");
    }

    return 0;
}

