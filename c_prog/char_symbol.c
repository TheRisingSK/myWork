#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter a char :");
    scanf("%c", &ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        printf("It is alphabet\n");
    }
    else if(ch>='0' && ch<='9'){
        printf("It is digit\n");
    }
    else{
        printf("It is special symbol\n");
    }
    return 0;
}
