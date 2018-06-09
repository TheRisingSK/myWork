#include<stdio.h>
typedef struct Date
{
    int dd:5;//31
    int mm:4;//12
    int yy:31;//2000
}date;

void main()
{
    printf("size of struct: %d",sizeof(date));
}
