#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1, no2, no3;

    printf("Enter three numbers :");
    scanf("%d %d %d", &no1, &no2, &no3);
    if(no1>no2){
        if(no1>no3){
            printf("%d is grater\n", no1);
        }
        else{
            printf("%d is grater\n", no3);
        }
    }
    else{
        if(no2>no2){
            printf("%d is grater\n", no2);
        }
        else{
            printf("%d is grater\n", no3);
        }
    }
    return 0;
}
