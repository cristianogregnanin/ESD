/* ex_3.47 deitel*/

/* scrivete un programma che legga in input un intero non negativo e quindi collochi
e visualizzi il suo fattoriale */

#include <stdio.h>


int main()
{

int n, fattoriale, approssimazione;
float e = 0.0;

n = 0;
approssimazione = 3;

fattoriale = 1;

while (n <= approssimazione){

  if (n == 0)
    fattoriale *= 1;
  else
    fattoriale *= n;

e += 1.0/fattoriale;

 n++;
}

  printf("il valore di e è: %f", e);

   return 0;
}
