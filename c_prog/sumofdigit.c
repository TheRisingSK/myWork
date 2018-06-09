#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no, sum = 0, rem;

    printf("Enter a number :");
    scanf("%d", &no);

    while(no!=0){
        rem = no %10;
        sum = sum + rem;
        no = no /10;
    }
    printf("Sum=%d", sum);

    return 0;
}
