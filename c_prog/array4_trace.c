#include<stdio.h>
int main(){
    int i, arr[5]={1,2,3,4,5,6,7,8,9,10};
    //what happens when array elements initializing limit is exceeded and printed array out of boundry

    for(i=0;i<10;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
/* Output:-

1
2
3
4
5
5
32
2
6356884
4198653

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/
