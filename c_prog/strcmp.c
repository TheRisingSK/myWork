#include<string.h>
#include<stdio.h>
void main(){

    char name1[]={"Santosh"}, name2[]={"SantosH"};

    if(strcmp(name1, name2)==0){
        printf("String are equal !");
    }
    else{
        printf("Strings are unequal !");
    }
}
