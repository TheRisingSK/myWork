#include<stdio.h>

// global variable
int x = 1;

int main(){

        // static variable
        static int z = 1;


        {
            //local variable
            int y = 1;

            printf("global x=%d\n", x);
            printf("local y=%d\n", y);
            printf("static z=%d\n", z);
            x++;
            y++;
            z++;

            printf("x=%d\n", x);
            printf("y=%d\n", y);
            printf("z=%d\n", z);
            x++;
            y++;
            z++;
        }


}
