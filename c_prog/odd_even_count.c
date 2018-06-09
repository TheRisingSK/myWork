#include<stdio.h>
int main(){

    int a[3][3], i, j, odd=0, even=0;

    printf("Enter 9 elements of first matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    printf("Even=%d, Odd=%d", even, odd);
    return 0;
}

