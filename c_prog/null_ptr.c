#include<stdio.h>
void  main(){
    int n=10;
    int *ptr = &n;
    printf("ptr=%d\n", *(ptr));
    if(ptr){
        printf("ptr is not null\n");
    }
    else{
        printf("ptr is null !\n");
    }
}
