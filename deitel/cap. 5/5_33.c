/* ex. 5.33 Deitel C how to program */
/* L'utilizzo dei computer nell'educazione è detta istruzione assistita dal computer (CAI,
computer-assisted instruction). Uno dei problemi che si sviluppa negli ambienti CAI è l'affaticamento
dello studente. Questo può essere eliminato, variando il dialogo del computer in modo da mantenere viva
l'attenzione dello studente. Modificate il programma dell'Esercizio 5.32 in modo che siano visualizzati
vari commenti a fronte di ogni risposta corretta e sbagliata, come segue:

  Commenti per una risposta correttamente

  Very good!
  Excellent!
  Nice work!
  Keep up the good work!

  Commenti per una risposta sbagliata

  No. please try again.
  Wrong. Try once more.
  Don't give up!
  No. Keep trying.

Utilizzate il generatore di numeri casuali per scegliere uno compreso tra 1 e 4 e selezionare un
commento appropriato a ogni risposta. Utilizzate la struttura switch con delle istruzioni printf per
emettere i commenti.
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
int moltiplicazione (void);

while (moltiplicazione() != 2){
  ;
}

  return 0;
}

int moltiplicazione (void){

  int a = rand() % 9;
  int b = rand() % 9;
  int c;

  printf("How much is %d times %d?: ",a, b);
  scanf("%d", &c);

  while (c != (a*b)){

    switch (rand() % 4) {
      case 0:
        printf("No. Please try again: ");
        break;
      case 1:
        printf("Wrong. Try once more: ");
        break;
      case 2:
        printf("Don't give up!: ");
        break;
      case 3:
        printf("No. Keep trying: ");
        break;
    }

    scanf("%d", &c);
  }

  switch (rand() % 4) {
    case 0:
      printf("Very good!\n");
      break;
    case 1:
      printf("Excellent!\n");
      break;
    case 2:
      printf("Nice work!\n");
      break;
    case 3:
      printf("Keep up the good work!\n");
      break;
    }

  return 0;

}
