#include<stdio.h>
int main(){

    float grade;

    printf("Enter your grade :");
    scanf("%f",&grade);

    if(grade<35){
        printf("Failed\n");
    }
    else if(grade>35 && grade<40){
        printf("C grade\n");
    }
    else if(grade>40 && grade<60)
    {
        printf("B grade\n");
    }
    else if(grade>60 && grade<80){
        printf("A grade");
    }
    else if(grade>80){
        printf("A++ grade\n");
    }
    else{
        printf("Enter proper grade\n");
    }
    return 0;
}
/*
Enter your grade :87
A++ grade
*/
