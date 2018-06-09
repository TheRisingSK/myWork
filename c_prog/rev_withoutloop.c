#include<stdio.h>
main ()
{
int num, a, b,c,d, rev=0;

printf ("Enter the number : ");
scanf ("%d", &num);
a = num%10;
num = num/10;
rev= a*10000;

b = num%10;
num = num/10;
rev= b*1000;

c = num%10;
num = num/10;
rev= c*100;

d = num%10;
num = num/10;
rev= d*10;


printf ("The sum of the digits of the entered number is: %d", rev);

}
