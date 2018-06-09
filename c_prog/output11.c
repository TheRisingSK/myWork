#include<stdio.h>
int main(){
    struct book{
        char name[40];
        int pages;
        float price;
    };
    //all will be zero as these elements partially initialized
    struct book b1={0};
    printf("%d %f\n", b1.pages, b1.price);
    return 0;
}
