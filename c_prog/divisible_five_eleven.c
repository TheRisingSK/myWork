#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;

    printf("Enter a number :");
    scanf("%d", &no);
    if( (no%5==0) && (no%11==0) ){
        printf("Number is divisible by 5 and 11\n");
    }
    else{
        printf("Number is not divisible by 5 and 11\n");
    }
    return 0;
}
