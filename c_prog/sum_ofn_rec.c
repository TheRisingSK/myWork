#include<stdio.h>
int sumn_fun(int);
int main(){
    int n, sum;
    printf("Enter number upto n :");
    scanf("%d", &n);
    sum = sumn_fun(n);
    printf("Sum=%d", sum);
    return 0;
}

int sumn_fun(int num){
    int sum;
    if(num==0){
        return;
    }
    else{
        sum = num + sumn_fun(num-1);
        return sum;
    }
}
