#include<stdio.h>
int lenStr(char *str);
void main(){
    char str[40];
    int len;
    printf("Enter  string :");
    gets(str);
    len = lenStr(str);
    printf("Length=%d", len);
}
int lenStr(char *str){
    int l=0;
    while(*str!='\0'){
        l++;
        str++;
    }
    return l;
}
