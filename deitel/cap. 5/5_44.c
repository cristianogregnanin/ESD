/* ex. 5.44 Deitel C how to program */
/* Gli Esercizi dal 5.32 al 5.34 hanno permesso di sviluppare un programma di istruzione assistita
dal computer, per insegnare la moltiplicazione a uno studente di scuola elementare. Questo esercizio
suggerisce dei miglioramenti a quel programma.
  a) Modificate il programma in modo da consentire all'utente di immettere un livello di
     difficoltà. Un livello 1 significherà utilizzare solo numeri di una cifra all'interno dei problemi,
     un livello 2 significherà utilizzare anche numeri a due cifre ecc.
  b) Modificate il programma in modo da consentire all'utente di scegliere il tipo di problemi
     aritmetici che lui o lei desidera studiare. Un'opzione 1 significherà solo problemi sull'addizione,
     2 solo sulla sottrazione, 3 solo sulla moltiplicazione, 4 solo sulla divisione mentre 5
     significherà mischiare a caso problemi di tutti questi tipi.
  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main(){

  srand(time(NULL));
  int aritmetica (void);
  int a;

  a = aritmetica();

  if (a >= 7)
    printf("le risposte corrette sono il: %d%%", (int) (a*100)/10);
  else {
    printf("le risposte corrette sono il: %d%%\n", (int) (a*100)/10);
    printf("Please ask your instructure for extra help");
  }


    return 0;
  }

  int aritmetica (void){

    int a = 0;
    int b = 0;
    int c;
    int i;
    char operazione;
    int corrette = 0;
    int operatore = 0;
    int domanda = 0;
    int random = 0;
    int livello = 0;

    printf("Scegli l'operatore: 1 addizione, 2 sottrazione, 3 moltiplicazione,\n 4 divisione, 5 random: ");
    scanf("%d", &operatore);

    printf("Scegli il livello di difficoltà: 1 operazioni ad una cifra, 2 operazione a due cifre: ");
    scanf("%d", &livello);

    for (i=1; i <= 10; i++){

      if (livello == 1){

        a = rand() % 9;
        b = rand() % 9;
      } else {
        a = (rand() % 9) + 10;
        b = (rand() % 9) + 10;
      }

      if (operatore == 1){
        domanda = a + b;
        operazione = '+';
      }
      if (operatore == 2){
        domanda = a - b;
        operazione = '-';
      }
      if (operatore == 3){
        domanda = a * b;
        operazione = '*';
      }
      if (operatore == 4){
        domanda = a / b;
        operazione = '/';
      }
      if (operatore == 5){

        random = (rand() % 3)+1;

        if (random == 1){
          domanda = a + b;
          operazione = '+';
        }
        else if(random == 2){
          domanda = a - b;
          operazione = '-';
        }
        else if(random == 3){
          domanda = a * b;
          operazione = '*';
        }
        else {
          domanda = a / b;
          operazione = '/';
        }
      }

      printf("How much is %d %c %d?: ",a ,operazione, b);
      scanf("%d", &c);

    while (c != (domanda) && (i < 10)){

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

    if (c == (domanda)){

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
