#include<stdio.h>
void main(){

    int i, sum=0;
    char str[] ={"Hello123welcome87"};

    for(i=0;i<str[i]!='\0';i++){
        if((str[i]>='0') &&(str[i]<='9')){
            sum+=str[i]-'0';
        }
    }
    printf("Sum=%d", sum);
}
