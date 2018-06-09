#include <stdio.h>
#include <stdlib.h>

int main()
{
    int phy, chem, bio, math, comp;
    float avg;

    printf("Enter the marks of phy, chem, bio, math, comp :");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);
    avg = (phy+chem+bio+math+comp) / 5;
    printf("Average=%.2f\n", avg);

    if(avg>=90){
        printf("Grade A\n");
    }
    else if(avg>=80){
        printf("Grade B\n");
    }
    else if(avg>=70){
        printf("Grade C\n");
    }
    else if(avg>=60){
        printf("Grade D\n");
    }
    else if(avg>=40){
        printf("Grade E\n");
    }
    else{
        printf("Grade F\n");
    }

    return 0;
}
