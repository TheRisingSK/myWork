#include<stdio.h>

//declaring static variable
static int x = 5;

void functionF1(){
    x--;
    printf("x = %d\n", x);
}

int main(){

    //calling function
    functionF1();
    functionF1();
    functionF1();
    return 0;
}
/*
x = 4
x = 3
x = 2
*/
