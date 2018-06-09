#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<=4;i++){
        for(j=65;j<=68;j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}
