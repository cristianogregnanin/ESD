/* ex. 3.45 Deitel C how to program */
/* triangolo rettangolo */

#include <stdio.h>


int main()
{

int accuratezza, fattoriale, n;
double e = 0;

fattoriale = 1;
n = 0;
accuratezza = 10;

while(n<=accuratezza)
{
  if (n == 0)
    fattoriale *= 1;
  else
    fattoriale *=n;

  e += 1.0/fattoriale;
  n++;
}

printf("%f\n", e);

   return 0;
}
