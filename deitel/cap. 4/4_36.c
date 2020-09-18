/* ex. 4.36 Deitel C how to program */
/* Scrivere un programma che prenda in input un anno compreso nell'intervallo dal 1994 al 1999
e utilizzi una iterazione con un ciclo for per produrre un calendario compendiato, visualizzato
in modo ordinato. Attenti agli anni bisestili.
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int anno, spazio, inizio;
int i,j,m,k,r;

printf("inserisci l'anno: ");
scanf("%d", &anno);

if(anno == 1994){
  inizio = 5;
  r = 28;
} else if (anno == 1995){
  inizio = 6;
  r = 28;
} else if (anno == 1996){
  inizio = 0;
  r = 29;
} else if (anno == 1997){
  inizio = 2;
  r = 28;
} else if (anno == 1998) {
  inizio = 3;
  r = 28;
} else if (anno == 1999){
  inizio = 4;
  r = 28;
} else
   ;



for (i=1; i<=12; i++){

  switch(i){

    case 1:
      printf("Gennaio %12d\n", anno);
      printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

      m = inizio;
      spazio = inizio;

      for (k=1; k <= spazio; k++)
        printf(" \t");

      for (j = 1; j <= 31; j++,m++){
          if (j != 1 && m%7 == 0)
            printf("\n");
          printf("%d \t",j);
      }

      spazio = 7-(7 - (((j-1)+spazio)%7));

      printf("\n\n");
      break;

    case 2:
      printf("Febbraio %12d\n", anno);
      printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

      m=spazio;

      for (k=1; k <= spazio; k++)
        printf(" \t");

      for (j = 1; j <= r; j++,m++){
          if (j != 1 && m%7 == 0)
            printf("\n");
          printf("%d \t",j);
      }

      spazio = 7-(7 - (((j-1)+spazio)%7));

      printf("\n\n");
      break;

    case 3:
    printf("Marzo %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 30; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 4:
    printf("Aprile %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 30; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }
    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 5:
    printf("Maggio %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 31; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 6:
    printf("Giugno %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 30; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 7:
    printf("Luglio %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 31; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 8:
    printf("Agosto %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 31; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 9:
    printf("Settembre %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 30; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 10:
    printf("Ottobre %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 31; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 11:
    printf("Novembre %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 30; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

    case 12:
    printf("Dicembre %12d\n", anno);
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");

    m=spazio;

    for (k=1; k <= spazio; k++)
      printf(" \t");

    for (j = 1; j <= 31; j++){
        if (j != 1 && m%7 == 0)
          printf("\n");
        printf("%d \t",j);
      m++;
    }

    spazio = 7-(7 - (((j-1)+spazio)%7));

    printf("\n\n");
    break;

  }
}


return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
