#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pval, sval, a, b;
    pval = printf("Enter two numbers :");
    sval = scanf("%d %d",&a, &b);
    printf("pval=%d sval=%d", pval, sval);
    return 0;
}
