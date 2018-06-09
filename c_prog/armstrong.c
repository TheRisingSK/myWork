#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no, temp, rem, sum = 0;

    printf("Enter a number :");
    scanf("%d", &no);

    temp = no;

    while(temp!=0){
        rem = temp % 10;
        sum = sum + (rem*rem*rem);
        temp = temp / 10;
    }
    if(sum ==no){
        printf("Armstrong number\n");
    }
    else{
        printf("Not armstrong number\n");
    }
    return 0;
}
