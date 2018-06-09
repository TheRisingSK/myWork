#include<stdio.h>
struct stud{
    int a;
    void (*fun) (int *a);
}s1;
void get_a(int *a){
    printf("Enter a:");
    scanf("%d", a);
}
void main(){
        s1.a=0;
        printf("a before call=%d\n", s1.a);
        s1.fun = get_a;
        s1.fun(&s1.a);
        printf("a after call=%d\n", s1.a);
}
