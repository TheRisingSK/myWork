#include<stdio.h>
void main(){
    char ch;
    printf("Enter a small char :");
    scanf("%c", &ch);
    ch = ch-32;
    printf("Upper char=%c\n",ch);
}
