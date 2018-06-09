#include<stdio.h>
void display();
// without prototype error will be shown
int main(){
    display();
    return 0;
}
void display(){
    printf("Cliffhanger\n");
}
