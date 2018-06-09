#include<stdio.h>
int main(){

    int i;
    int arr[5]={1,4};
    // Trace output what happens when array is partially initialized
    for(i=0;i<5;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
