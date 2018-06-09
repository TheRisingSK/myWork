#include<stdio.h>
#include<string.h>
union employee{
    int eid;
    char ename[40];
}e1;
void main(){
    e1.eid=100;
   // strcpy(e1.ename, "Santosh");

    printf("Eid=%d, Ename=%s\n", e1.eid, e1.ename);
}
