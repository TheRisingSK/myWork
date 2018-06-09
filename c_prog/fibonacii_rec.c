#include<stdio.h>
void fibrec(int,int,int);
int main(){

        int f1=0, f2=1, limit;

        printf("Enter the limit :");
        scanf("%d", &limit);
        printf("%d\t%d\t", f1, f2);
        fibrec(f1, f2, limit-2);
        return 0;
}
void fibrec(int a, int b, int limit){
    int fnext;
    if(limit==0){
        return;
    }
    else{
        fnext = a + b;
        printf("%d\t", fnext);
        fibrec(b, fnext, limit-1);
    }
}
