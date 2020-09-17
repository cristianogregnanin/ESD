/* ex. 4.08 Deitel C how to program */
/* Che cosa farà il seguente programma? */
#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int x;
  int y;
  int i;
  int j;

  /* sollecita l'utente a inserire i dati */
  printf("Enter integers in the range 1-20: " );
  scanf("%d%d", &x, &y); /* legge i valori per x e y */

  for (i = 1; i <= y; i++){/* conta da 1 a y */

    for (j = 1; j <= x; j++){/* conta da 1 a x */
      printf("@"); /* visualizza @ */
    } /* fine del comando for interno */

    printf("\n"); /* inizio di una nuova linea */
  } /* fine del comando for esterno */

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */


/* il progrmma fa un rettangolo di @ */
