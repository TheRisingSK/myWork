#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km, mtr;

    printf("Enter km :");
    scanf("%d",&km);
    mtr = km * 1000;
    printf("%d km = %d mtr",km, mtr);
    return 0;
}
