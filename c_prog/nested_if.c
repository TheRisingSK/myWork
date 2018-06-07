#include<stdio.h>
int main(){

    int a, b, c;

    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c)
            printf("%d is largest\n", a);
        else
            printf("%d is largest\n", c);
    }
    else{
        if(b>c)
            printf("%d is grater\n",b);
        else
            printf("%d is grater\n",c);
    }
    return 0;
}
/*
Enter three numbers :23 45 56
56 is grater
*/
