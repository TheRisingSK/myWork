#include<stdio.h>
int main(){
    int i;
    //infinite loop as returned value of scanf()  will result always true
    for(;scanf("%d", &i);printf("%d\n",i));
    return 0;
}
