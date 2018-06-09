#include<stdio.h>
int sum_rec(int);
int main(){

    int num, sum;
    printf("Enter a number :");
    scanf("%d", &num);
    sum = sum_rec(num);
    printf("Sum of digit=%d", sum);
    return 0;
}
int sum_rec(int num){
    static int sum=0;
    int rem;
    if(num==0){
        return 0;
    }
    else{
        sum=num%10+sum_rec(num/10);
        return sum;
    }
}
