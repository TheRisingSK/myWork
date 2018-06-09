#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bs;
    float gs, hra, da;

    printf("Enter basic salary :");
    scanf("%d", &bs);

    if(bs>=10000){
        hra = (bs*20) / 100;
        da = (bs*80) / 100;
    }
    else if(bs>=20000){
        hra = (bs*25) / 100;
        da = (bs*90) / 100;
    }
    else if(bs>=30000) {
        hra = (bs*30) / 100;
        da = (bs*95) / 100;
    }
    gs = bs + hra + da;
    printf("Basic salary=%d\n", bs);
    printf("Gross salary=%.2f", gs);
    return 0;
}
