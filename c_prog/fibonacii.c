#include<stdio.h>
int main(){

    int f1=0, f2=1, fnext, limit, i;

    printf("Enter a number :");
    scanf("%d", &limit);
    printf("%d\t%d\t", f1, f2);
    for(i=3;i<=limit;i++){
        fnext = f1 + f2;
        printf("%d\t",fnext);
        f1=f2;
        f2=fnext;
    }
    return 0;
}
