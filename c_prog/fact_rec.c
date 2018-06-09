#include<stdio.h>
int fact_rec(int);
int main(){

    int num, f;
    printf("Enter a number :");
    scanf("%d", &num);
    f = fact_rec(num);
    printf("Factorial=%d", f);
    return 0;
}
int fact_rec(int no){
    if(no==1){
        return;
    }
    else{
         return (no * fact_rec(no-1));
    }
}
