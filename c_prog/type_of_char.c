#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a char :");
    scanf("%c",&ch);
    printf("Char=%c\n",ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Is is a alphabet !");
    }
    else if(ch>='0' && ch<='9'){
        printf("It is digit !");
    }
    else{
        printf("It is special symbol !");
    }
    return 0;
}
