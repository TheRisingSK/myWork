#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sp;

    for(i=1;i<=4;i++){
        for(sp=i;sp<=3;sp++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
