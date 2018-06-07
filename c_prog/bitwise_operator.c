#include<stdio.h>
int main(){

    int a = 0 , b = 1;

    //bitwise & AND
    if( a & b){
        printf("Line 1 condition true\n");
    }

    a = 1 ;
    b = 0 ;

    //bitwise | OR
    if( a | b){
        printf("Line 2 condition true\n");
    }

    a = 1 ;
    b = 0 ;

    //bitwise ^ XOR
    if(a ^ b){

        printf("Line 3 condition true\n");
    }

    a = 10;
    //Complement operator
    printf("a = %d\n", (~a));

    //left shift operator
    a = 30;
    printf("a = %d\n", (a<<5));

    //right shift operator
    a = 30;
    printf("a = %d\n", (a>>5));

    return 0;
}
/*

Line 2 condition true
Line 3 condition true
a = -11
a = 960
a = 0

*/
