#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, ch;

    for(i=0;i<4;i++){
        ch = 65+i;
        for(j=65;j<=ch;j++){
            printf("%c ", j);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
