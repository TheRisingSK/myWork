#include <stdio.h>

int main() {

   int a = 21;
   int b = 10;
   int c ;

   //equal to operator
   if( a == b ) {
      printf("a is equal to b\n" );
   } else {
      printf("a is not equal to b\n" );
   }

   //less than operator
   if ( a < b ) {
      printf("a is less than b\n" );
   } else {
      printf("a is not less than b\n" );
   }

   //grater than operator
   if ( a > b ) {
      printf("a is greater than b\n" );
   } else {
      printf("a is not greater than b\n" );
   }


   a = 5;
   b = 20;

    //less than or equal to operator
   if ( a <= b ) {
      printf("a is either less than or equal to  b\n" );
   }

   ////grater than or equal to operator
   if ( b >= a ) {
      printf("b is either greater than  or equal to b\n" );
   }
   return 0;
}
/*
a is not equal to b
a is not less than b
a is greater than b
a is either less than or equal to  b
b is either greater than  or equal to b
*/
