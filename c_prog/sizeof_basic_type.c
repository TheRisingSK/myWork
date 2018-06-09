#include<stdio.h>
void main(){

        int x;
        long int y;
        short int z;
        signed int a;
        unsigned int b;
        printf("int x=%d\n", sizeof(x));
        printf("long int x=%d\n", sizeof(y));
        printf("short int x=%d\n", sizeof(z));
        printf("signed int x=%d\n", sizeof(a));
        printf("unsigned int x=%d\n", sizeof(b));


        float p;
        double q;
        long double r;
        printf("\nfloat p=%d\n", sizeof(p));
        printf("double q=%d\n", sizeof(q));
        printf("long double r=%d\n", sizeof(r));

        char ch;
        unsigned char ch1;
        printf("\nchar %d\n", sizeof(ch));
        printf("unsigned char %d\n", sizeof(ch1));
}
