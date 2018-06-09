#include<stdio.h>
int main(){

    int i, j, alpha=97,flag=1;

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){

            if(flag==1)
            {
               alpha-=32;
               flag=0;
            }

            else
            {
              alpha+=32;
              flag=1;
            }
            printf("%c ",alpha);
            alpha++;
        }
        printf("\n");
    }

    return 0;
}
