#include<stdio.h>
int main(){

    int i, j,flag=1;
    char alpha='a';

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ", alpha);
            }
            else{
                printf("%c ", (alpha-32));
            }
        }
        printf("\n");
        alpha++;
    }
    return 0;
}
