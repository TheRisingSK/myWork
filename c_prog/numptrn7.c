#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, flag=0;

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                flag = 0;
                printf("%d ", flag);
            }
            else{
                flag = 1;
                printf("%d ", flag);
            }
        }
        printf("\n");
    }
    return 0;
}
