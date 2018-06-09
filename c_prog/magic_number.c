#include <stdio.h>
#include <stdlib.h>
void magicFunc(int);
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    magicFunc(num);
    return 0;
}
void magicFunc(int num){

    int sum=0, sum2=0, temp, temp2, rem, mult;
    temp=num;
    while(num!=0){
        rem = num%10;
        sum = sum + rem;
        num = num / 10;
    }
    temp2 = sum;
    rem=0;
    while(sum!=0){
        rem = sum % 10;
        sum2 = (sum2*10) + rem;
        sum = sum/10;
    }
    mult = temp2 * sum2;
    printf("Sum of digit=%d Reverse=%d Product=%d\n", temp2, sum2, mult);
    if(temp==mult){
        printf("Number is magic number : %d\n", mult);
    }
    else{
        printf("Number is not magic number\n");
    }
}
