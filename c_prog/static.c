#include<stdio.h>
void countStatic();
int main()
{
    countStatic();
    countStatic();
    countStatic();
    return 0;

}

void countStatic()
{
    static int x = 10;
    int y = 10;
    x++;
    y++;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("\n");
}
