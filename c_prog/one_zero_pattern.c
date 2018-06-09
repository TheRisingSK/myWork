#include<stdio.h>
int main(){

    int i, j, flag=0;

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
                if(flag==0)
                {
                    flag=1;
                }
                else
                    flag=0;
            printf("%d ",flag);
        }
        printf("\n");
    }

    return 0;
}
