#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sp;
    char ch=65;
    for(i=1;i<=4;i++){
        for(sp=i;sp<=3;sp++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
