#include<stdio.h>
int main( int argc, char *argv[]){

    if(argc==2){
        printf("Argument Supplied :%d\n", argv[1]);
    }
    else if(argc>2){
        printf("Too many argument supplied !\n");
    }
    else{
        printf("One argument expected !\n");
    }
}
