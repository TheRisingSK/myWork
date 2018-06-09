#include<stdio.h>
struct Point{
    int x, y;
};
void main(){

    struct Point p1[5];

    int i;

    printf("Enter five elements :\n");
    for(i=0;i<5;i++){
        scanf("%d %d", &p1[i].x, &p1[i].y);
    }

    printf("Entered elements are :\n");
    for(i=0;i<5;i++){
        printf("%d %d\n", p1[i].x, p1[i].y);
    }

}
