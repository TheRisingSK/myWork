#include<stdio.h>
int main(){

    char ch='B';

    switch(ch){

        case 'A++': printf("Distinction\n");
                    break;
        case 'A': printf("First class\n");
                    break;
        case 'B': printf("Second class\n");
                    break;
        case 'C': printf("Third class\n");
                    break;
        case 'D': printf("Failed\n");
                    break;
        default: printf("Not match case\n");
    }
    return 0;
}
/*
Second class
*/
