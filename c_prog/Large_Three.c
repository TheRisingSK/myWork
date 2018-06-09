#include<stdio.h>
void main(){

    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>n2){
        if(n1>n3){
            printf("%d is gratest number\n", n1);
        }
        else{
            printf("%d is gratest number\n", n3);
        }
    }
    else{
        if(n2>n3){
            printf("%d is grater number\n", n2);
        }
        else{
            printf("%d is grater number\n", n3);
        }
    }
}
