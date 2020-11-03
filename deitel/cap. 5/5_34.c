/* ex. 5.34 Deitel C how to program */
/* I sistemi più raffinati di istruzione assistita dal computer monitorano le prestazioni dell'utente
durante un certo periodo. La decisione di incominciare un nuovo argomento sarà spesso basata sul
successo dello studente con gli argomenti precedenti. Modificate il programma dell'Esercizio 5.33 in
modo da contare il numero di risposte corrette e sbagliate immesse dallo studente. dopo che lo studente
avrà digitato 10 risposte, il vostro programma dovrà calcolare la percentuale di quelle corrette.
Qualora la percentuale sia inferiore al 75 percento, il vostro programma dovrà visualizzare "Please ask
your instructure for extra help" e quindi terminare la propria eseguzione.
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
int moltiplicazione (void);
int a;

a = moltiplicazione();

if (a >= 7)
  printf("le risposte corrette sono il: %d%%", (int) (a*100)/10);
else {
  printf("le risposte corrette sono il: %d%%\n", (int) (a*100)/10);
  printf("Please ask your instructure for extra help");
}


  return 0;
}

int moltiplicazione (void){

  int a;
  int b;
  int c;
  int i;
  int corrette = 0;

  for (i=1; i <= 10; i++){

    a = rand() % 9;
    b = rand() % 9;

    printf("How much is %d times %d?: ",a, b);
    scanf("%d", &c);

  while (c != (a*b) && (i < 10)){

    switch (rand() % 4) {
      case 0:
        printf("No. Please try again: ");
        i++;
        break;
      case 1:
        printf("Wrong. Try once more: ");
        i++;
        break;
      case 2:
        printf("Don't give up!: ");
        i++;
        break;
      case 3:
        printf("No. Keep trying: ");
        i++;
        break;
    }

      scanf("%d", &c);

  }

  if (c == (a*b)){

  switch (rand() % 4) {
    case 0:
      printf("Very good!\n");
      corrette++;
      break;
    case 1:
      printf("Excellent!\n");
      corrette++;
      break;
    case 2:
      printf("Nice work!\n");
      corrette++;
      break;
    case 3:
      printf("Keep up the good work!\n");
      corrette++;
      break;
    }
  }
}

  return corrette;

}
