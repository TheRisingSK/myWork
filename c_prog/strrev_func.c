#include<stdio.h>
#include<string.h>
char * lenStr(char *str);
void main(){
    char str[40];
    printf("Enter  string :");
    gets(str);
    lenStr(str);
}
char * lenStr(char *str){
    int i=0, j=0, temp;
    j = strlen(*str)-1;
    while(i<j){
       temp = *str[i];
       *str[i] = *str[j];
       *str[j] = temp;
       i++;
       j--;
    }
    printf("Reverse=%s", *str)
}
