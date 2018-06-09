#include<stdio.h>
int max(int,int,int);
void main(){
    int (*ptr)(int, int, int);
    int maxn=0;
    ptr = max;
    maxn = ptr(10, 204, 30);
    printf("Max=%d\n", maxn);

}
int max(int a, int b, int c){
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else{
        if(b>c)
            return b;
        else
            return c;
    }
}
