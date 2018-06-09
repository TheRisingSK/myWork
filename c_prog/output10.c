#include<stdio.h>
int main(){
    struct emp{
        char name[50];
        int age;
        float sal;
    };
    // when structure is partially initialized its all elements initialized as 0
    struct emp e = {"Sandy"};
    printf("%d %f\n", e.age, e.sal);
    return 0;
}
