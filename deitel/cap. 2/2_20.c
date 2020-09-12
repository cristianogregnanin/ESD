/* ex_2.20 deitel*/

/* Scrivete un programma che legga il raggio di un cerchio e visualizzi il diametro, la circonferenza
   e l'area dello stesso. Usate il valore costante 3,14159 per pi. Eseguire ognuno di questi calcoli
   all'interno della/e istruzione/i printf e usate la specifica di conversione %f. */

#include <stdio.h>

int main ()
{

  int raggio;

  printf("Inserire il raggio: ");
  scanf("%d", &raggio);

  printf("Il diametro è %d\n", raggio * 2);

  printf("La circonferenza è %f\n", 2 * 3.14159 * raggio);

  printf("L'area è %f\n", 3.14159 * raggio * raggio);


return 0;
}
