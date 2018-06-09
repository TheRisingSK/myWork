#include<stdio.h>
#include<string.h>
// integer type function declaration
int sum(int,int);
// floating point type declaration
float sum1(float,float);
// charactor array function
void ret_name(char []);
int main()
{
    int a, b, add;
    float x, y, total;
    char name[60], nm[50];

    printf("Enter your name :");
    scanf("%s",name);

    printf("Enter two int numbers :");
    scanf("%d %d", &a, &b);

    printf("Enter two float numbers :");
    scanf("%f %f", &x, &y);

    add = sum(a,b);
    total = sum1(x,y);
    ret_name(name);

    printf("Sum of two int :%d\n", sum);
    printf("Sum of two float :%.2f\n", total);
    printf("Reverse String :%s\n", name);
    return 0;
}
int sum(int a, int b){
    return (a+b);
}
float sum1(float x, float y){
    return(x+y);
}
void ret_name(char name[])
{

    strrev(name);

}
