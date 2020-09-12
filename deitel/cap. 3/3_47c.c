/* ex. 3.45 Deitel C how to program */
/* triangolo rettangolo */

#include <stdio.h>
#include <math.h>


int main()
{
   int n = 0, fact = 1, accuracy = 9, esp = 3;
   double e = 0;

   while( n <= accuracy )
   {
      if ( n == 0 )
         fact *= 1;

      else
         fact *= n;

      e += pow(esp, n) / fact;
      ++n;
   }

   printf( "e is %f\n", e );

   return 0;
}
