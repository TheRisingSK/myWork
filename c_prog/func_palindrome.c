#include <stdio.h>
#include <stdlib.h>
void palindromeFunc(int);
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    palindromeFunc(num);
    return 0;
}
void palindromeFunc(int num){
    int temp, sum = 0;
    temp = num;
    while(num!=0){
        sum  =  (sum * 10 ) + num % 10;
        num = num / 10;
    }
    if(sum==temp){
        printf("Palindrome Number\n");
    }
    else{
        printf("Not Palindrome Number\n");
    }
}
