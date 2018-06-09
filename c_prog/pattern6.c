#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char ch=65;

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
