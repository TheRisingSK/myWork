#include<string.h>
#include<stdio.h>
void main(){

    char name2[10], name[]={"Santosh"};

    strcpy(name2, name);
    printf("Name2=%s", name2);
}
