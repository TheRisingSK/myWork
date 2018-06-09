#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a char :");
    scanf("%c",&ch);
    convert(ch);
    printf("Char=%c",ch);
    return 0;
}

void convert(char ch[]){

        int i=0;
        while(ch[i]!='\0'){

            if(ch[i]>='a' && ch[i]<='z'){
                ch[i]= ch[i]-32;
            }
            i++;
        }
}


