#include<stdio.h>
int main(){
    int i, arr[5]={1,3,5,7,9,11};
    // what happens when array is initialized more than its size

    for(i=0;i<5;i++){
        printf("%d\n", arr[i]);
    }
}
/*
    Output:-
    compilation warning : excess elements in array initializer
1
3
5
7
9
*/
