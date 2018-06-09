#include<stdio.h>
int sumrec(int);
int main(){
        int num, res;

        printf("Enter a number :");
        scanf("%d", &num);
        res=sumrec(num);
        printf("%d\n", res);
        return 0;
}
int sumrec(int no){
    static int sum=0;
    int rem;
    if(no==0){
        return;
    }
    else{
        rem=no%10;
        sum+=rem;
        sumrec(no/10);
    }
    return sum;
}
