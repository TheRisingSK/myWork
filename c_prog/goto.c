#include<stdio.h>
int main(){

    int age;

    ineligible:
    {
        printf("You are not eligible to vote !\n");
        }

    printf("Enter your age :");
    scanf("%d", &age);

    if(age<18){
        goto ineligible;
    }
    else{
        printf("You are eligible to vote !\n");
    }
    return 0;
}
