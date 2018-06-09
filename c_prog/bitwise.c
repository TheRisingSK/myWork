#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y =20, z;
    z= (x&y) + (x|y) + (x^y);
    printf("%d",z);
    return 0;
}
