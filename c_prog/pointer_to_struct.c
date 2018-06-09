#include<stdio.h>
struct Point{
    int x, y;
};

void main(){

    struct Point p1 =  {32, 65};
    struct Point *p2 = &p1;

    printf("x=%d, y=%d\n", p2->x, p2->y);
}
