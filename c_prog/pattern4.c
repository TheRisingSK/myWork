#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, chc=65, chs=97;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ", chs++);
            }
            else{
                printf("%c ", chc++);
            }
        }
        printf("\n");
    }
    return 0;
}
