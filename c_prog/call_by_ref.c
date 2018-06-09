#include<stdio.h>
int cubeNum(int *);
int main(){
    int cube, num;

    printf("Enter a number :");
    scanf("%d", &num);
    cube = cubeNum(&num);
    printf("Cube=%d, Num=%d", cube, num);
    return 0;
}
int cubeNum(int *n){
    return (*n * *n * *n);
}
