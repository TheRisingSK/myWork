#include<stdio.h>
struct Point{
    int x, y;
};

void main(){

    struct Point p1={12,55};
    p1.x=44;
    printf("x = %d, y = %d\n", p1.x, p1.y);
}
