#include <stdio.h>
#include <stdlib.h>
void reverseFun(int);
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    reverseFun(num);
    return 0;
}
void reverseFun(int num){
    int sum=0;
    while(num!=0){
        sum = (sum  * 10) + num % 10 ;
        num = num / 10;
    }
    printf("Reverse=%d", sum);
}
