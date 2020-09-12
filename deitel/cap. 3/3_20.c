/* ex_3.20 deitel*/

/* L'interesse semplice su un mutuo è calcolato dalla formula

  interest = principal * rate * days / 365

  La formula precedente presume che rate sia il tasso di interesse annuale e quindi
  include la divisione per 365 (giorni). Sviluppate un programma che prenda in input
  principal(capitale, rate (tasso) e days (giorni) per diversi mutui e visualizzi
  l'interesse semplice per ogni mutuo, utilizzando la formula precedente.*/

#include <stdio.h>

/*inizio del programma */
int main()
{

float principal, rate;
int days;

printf("enter loan principal (-1 to end): ");
scanf("%f", &principal);

while (principal != -1)
{
  printf("enter interest rate: ");
  scanf("%f", &rate);

  printf("enter term of loan in days: ");
  scanf("%d", &days);

  printf("the interest charge is $%.2f\n",loan * rate * days / 365);

  printf("enter loan principal (-1 to end): ");
  scanf("%f", &principal);
}

return 0;
} /*fine del programma*/
