#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=2, flag=0;

    printf("Enter a number :");
    scanf("%d", &num);

    while(i<=(num/2)){
            if(num%i==0){
                flag=1;
                break;
            }
            i++;
    }
    if(flag==0){
        printf("Prime no\n");
    }
    else{
        printf("Not prime no\n");
    }
    return 0;
}
