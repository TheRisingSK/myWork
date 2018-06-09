#include<stdio.h>
int cube_rec(int);
int main(){
    int num, cube;
    printf("Enter a number :");
    scanf("%d", &num);
    cube = cube_rec(num);
    printf("Cube=%d",cube);
    return 0;
}
int cube_rec(int n){
    return ( (n*n*n) + cube_rec(n));
}
