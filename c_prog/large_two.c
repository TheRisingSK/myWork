#include<stdio.h>
void main(){

    int n1, n2;

    printf("Enter two numbers :");
    scanf("%d %d", &n1, &n2);
    if(n1>n2){
        printf("%d is grater\n", n1);
    }
    else{
        printf("%d is grater\n", n2);
    }
}
