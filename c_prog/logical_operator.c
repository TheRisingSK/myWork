#include<stdio.h>
int main(){

    int a = 10, b = 30;

    // && operator
    if(a && b){
        printf("Both conditions are true\n");
    }

    // || operator
    if(a || b){
        printf("Either one condition or both conditions are true\n");
    }

    // ! operator
    if(!a){
        printf("makes true condition false\n");
    }
    return 0;
}
/*
Both conditions are true
Either one condition or both conditions are true
*/
