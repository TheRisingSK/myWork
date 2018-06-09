#include<stdio.h>
int main(){

    int a[3][3], i, j, neg=0;

    printf("Enter 9 elements of first matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]<0){
                    neg++;
            }
        }
    }
    printf("Negetive=%d", neg);
    return 0;
}

