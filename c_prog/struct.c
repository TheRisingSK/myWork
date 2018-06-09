#include<stdio.h>
#include<string.h>
struct emp{
    int eid;
    char ename[50];
    float esal;
}e1;

void main(){

    e1.eid = 101;
    strcpy(e1.ename, "santosh");
    e1.esal = 234567;

    printf("Eid=%d\n", e1.eid);
    printf("Ename=%s\n", e1.ename);
    printf("Esal=%f\n", e1.esal);
    printf("size=%d\n", sizeof(e1));
    printf("eid=%d\n", sizeof(e1.eid));
    printf("ename=%d\n", sizeof(e1.ename));
    printf("esal=%d\n", sizeof(e1.esal));
}
