#include<stdio.h>
void main(){
    char ch;
    printf("Enter a uppercase char :");
    scanf("%c", &ch);
    ch+=32;
    printf("Lowercase char :%c\n", ch);
}
