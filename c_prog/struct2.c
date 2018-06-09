#include<stdio.h>
struct Point{
    int x;
    int y;
};

void main(){

    struct Point p1={.y=90, .x=52};
    printf("x=%d,  y=%d", p1.x, p1.y);
}
