#include<stdio.h>
int main(){

    int i, j, ch=65;

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c%d ", ch++,(ch-64));
        }
        printf("\n");
    }

}
