#include<stdio.h>
int main(){

    int arr[10], flag=0, i, elem;

    printf("Enter ten numbers :");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<10;i++){
        printf("%d\n", arr[i]);
    }
    printf("\nEnter element to search :");
    scanf("%d", &elem);

    for(i=0;i<10;i++){
        if(arr[i]==elem){
            flag=1;
            printf("Number is present at %d location\n", i);
            break;
        }
    }
    if(flag==0){
        printf("\nNumber is not present !\n");
    }
    return 0;
}
