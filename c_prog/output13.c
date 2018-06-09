#include<stdio.h>
int main(){

    int a[5]={2,3};
    /*0 0 0
    when array elements partially initialized remaining elements are initialized as 0*/
    printf("%d %d %d\n",a[2], a[3], a[4]);
    return 0;
}
