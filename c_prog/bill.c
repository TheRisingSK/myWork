#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unit;
    float bill, surcharge, total_bill;

    printf("Enter electricity unit :");
    scanf("%d", &unit);

    if(unit<=50){
            bill = unit * 0.50;
    }
    else if(unit<=150){
            bill = unit * 0.75;
    }
    else if(unit<=250){
            bill = unit * 1.20;
    }
    else{
        bill = unit * 1.50;
    }
    surcharge = (bill * 20) / 100;
    total_bill = bill + surcharge;
    printf("Total Bill=%.2f", total_bill);
    return 0;
}
