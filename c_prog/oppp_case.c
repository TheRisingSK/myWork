#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a char :");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        ch = ch+32;
    }
    else{
        ch=ch-32;
    }
    printf("Char=%c",ch);
    return 0;
}
