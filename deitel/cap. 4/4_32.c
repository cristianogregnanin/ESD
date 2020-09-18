/* ex. 4.32 Deitel C how to program */
/* Modificate il programma che avete scritto nell'esercizio 4.31, in modo da leggere un numero
dispari compreso nell'intervallo da 1 a 19 per specificare il numero di righe comprese nel rombo.
Il vostro programma dovrà quindi visualizzare un rombo della misura appropriata.
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int i, j, k;
int righe;

printf("inserisci il numero di righe del rombo: ");
scanf("%d", &righe);

for (i = 1; i <= righe; i += 2){ /* linee */
  for (j = 1; j <= (righe - i)/2; j++)
    printf(" ");
    for (k = 1; k <= i; k++)
      printf("*");

    printf("\n");
}
for (i = (righe-2); i >= 1; i -= 2){ /* linee */
  for (j = (righe - i)/2; j > 0; j--)
    printf(" ");
    for (k = 1; k <= i; k++)
      printf("*");

  printf("\n");
}

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
