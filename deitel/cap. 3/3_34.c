/* ex_3.33 deitel*/

/* sModificate il programma che avete scritto nell'Esercizio 3.33 in modo che visualizzi un
quadrato vuoto */

#include <stdio.h>

/*inizio del programma */
int main()
{

  int lato;
  int i = 1;
  int j = 1;

printf("inserisci la dimensione del lato (tra 1 e 20): ");
scanf("%d", &lato);

while (i <= lato) {
  while (j <= lato){
    if (i == 1 || i == lato || j== 1 || j == lato)
    printf("*");
    else
    printf(" ");
    j++;
  }
  j = 1;
  printf("\n");
  i++;
}

return 0;
} /*fine del programma*/
