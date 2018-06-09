#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sp;

    for(i=4;i>=1;i--){

        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
