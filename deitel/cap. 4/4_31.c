/* ex. 4.31 Deitel C how to program */
/* Scrivete un programma  he visualizzi il seguente disegno di un rombo. Potrete utilizzare
delle istruzioni printf che visualizzino un singolo asterisco (*) o uno spazio. Massimizzate
il vostro utilizzo delle ripetizioni (con comandi for nidificati) e minimizzate il numero di
istruzioni printf.
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int i, j, k;

for (i = 1; i <= 9; i += 2){ /* linee */
  for (j = 1; j <= (9 - i)/2; j++)
    printf(" ");
    for (k = 1; k <= i; k++)
      printf("*");

    printf("\n");
}
for (i = 7; i >= 1; i -= 2){ /* linee */
  for (j = (9 - i)/2; j > 0; j--)
    printf(" ");
    for (k = 1; k <= i; k++)
      printf("*");

  printf("\n");
}

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
