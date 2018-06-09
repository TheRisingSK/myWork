#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    printf("Before swap numbers are : a=%d, b=%d\n", a ,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap numbers are : a=%d, b=%d\n", a ,b);
    return 0;
}
