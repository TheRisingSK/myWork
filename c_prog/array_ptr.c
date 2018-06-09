#include<stdio.h>
void  main(){

    int var[]={10,20,30,40,50};
    int i, *ptr;

    ptr=var;
    for(i=0;i<5;i++){
        printf("%d\n", *ptr);
        ptr++;
    }
}
