/* ex. 4.22 Deitel C how to program */
/* Modificate il programma della figura 4.7 in modo che calcoli la votazione media della classe.*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int grade; /* un voto */
  int aCount = 0; /* numero di A */
  int bCount = 0; /* numero di B */
  int cCount = 0; /* numero di C */
  int dCount = 0; /* numero di D */
  int fCount = 0; /* numero di F */
  float media;

  printf("Enter the letter grades. \n");
  printf("Enter the EOF character to end input.\n");

  /* itera finchè l'utente non digita la sequenza di tasti che
  codifica la "fine del file" */

  while ((grade = getchar()) != EOF){

    /* determina che voto è stato inserito */
  switch(grade){ /* switch nidificato nel while */

    case 'A': /* il voto era una A maiuscola */
    case 'a': /* o una a minuscola */
      ++aCount; /*incrementa aCount */
      break; /* necessario per uscire dallo switch */

    case 'B': /* il voto era una B maiuscola */
    case 'b': /* o una b minuscola */
      ++bCount; /*incrementa aCount */
      break; /* necessario per uscire dallo switch */

    case 'C': /* il voto era una B maiuscola */
    case 'c': /* o una b minuscola */
      ++bCount; /*incrementa aCount */
      break; /* necessario per uscire dallo switch */

    case 'D': /* il voto era una B maiuscola */
    case 'd': /* o una b minuscola */
      ++bCount; /*incrementa aCount */
      break; /* necessario per uscire dallo switch */

   case 'F': /* il voto era una B maiuscola */
   case 'f': /* o una b minuscola */
     ++bCount; /*incrementa aCount */
     break; /* necessario per uscire dallo switch */

  case '\n': /* ignora i new line */
  case '\t': /* ignora le tabulazioni */
  case ' ': /* e gli spazi nell'input */
    break;

  default: /* intercetta tutti gli altri caratteri */
    printf("Incorret letter grade entered.");
    printf("Enter a new grade.\n");

  } /* fine del comando switch */
} /* fine del comando while */

/* visualizza il sommario dei risultati */

printf("\nTotals for each letter grade are: \n");
printf("A: %d\n", aCount );
printf("B: %d\n", bCount );
printf("C: %d\n", cCount );
printf("D: %d\n", dCount );
printf("F: %d\n", fCount );

media = (4 * aCount + 3 * bCount + 2 * cCount + dCount) /
        (aCount + bCount + cCount + dCount + fCount);

if (media > 3.4)
  printf("La media è A\n");
else if (media > 2.4)
  printf("La media è B\n");
else if (media > 1.4)
  printf("La media è C\n");
else if (media > 0.4)
  printf("La media è D\n");
else
  printf("La media è F\n");
  
return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
