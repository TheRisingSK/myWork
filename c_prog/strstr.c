#include<stdio.h>
#include<string.h>
void main(){
    char name[]={"I am santosh kshirsagar. I live in pune."};
    char *sub;

    sub = strstr(name, "santosh");
    printf("Sub=%s\n", sub);
}
