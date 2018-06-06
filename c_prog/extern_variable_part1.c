#include<stdio.h>
#include"extern_variable_part2.c"

int count;
extern void writeExtern();

int main(){

    count = 5;
    writeExtern();
    return 0;
}
/*
Count = 5
*/
