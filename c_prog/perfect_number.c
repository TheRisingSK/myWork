#include <stdio.h>
#include <stdlib.h>
void perfectFunc(int);
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    perfectFunc(num);
    return 0;
}
void perfectFunc(int num){
    int i,temp, sum=0;
    temp=num;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum = sum + i;
        }
    }
    if(temp==sum){
        printf("Perfect Number\n");
    }
    else{
        printf("Not perfect Number \n");
    }
}
