#include<stdio.h>
void fibo_func(int,int,int);
int main(){

    int f1=0, f2=1, limit;
    printf("Enter a limit :");
    scanf("%d", &limit);
    printf("%d\t%d\t", f1, f2);
    fibo_func(f1, f2, limit-2);
    return 0;
}
void fibo_func(int a, int b,int limit)
{   int fnext;
    if(limit==0){
        return;
    }
    else{
        fnext = a + b;
        printf("%d\t",fnext);
        fibo_func(b,fnext,limit-1);
    }
}
