#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is max", a);
    }
    if(b>a && b>c){
        printf("%d is max", b);
    }
    if(c>a && c>b){
        printf("%d is max", c);
    }
    if(a<b && a<c){
        printf("%d is min", a);
    }
    if(b<a && b<c){
        printf("%d is min", b);
    }
    if(c<a && c<b){
        printf("%d is min", c);
    }
    return 0;
}
