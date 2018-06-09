#include<stdio.h>
int main(){

    int x = 10, y = 20, z = 5, i;
    i = x<y<z;
    // step 1 : x<y i.e 10<20 = true 1
    // step 2 : 1<z i.e 1<5 = true 1
    // so final value is 1
    printf("%d\n", i);
    return 0;
}
