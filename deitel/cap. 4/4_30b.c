/* ex. 4.30b Deitel C how to program */
/* Riscrivete il programma della figura 4.7 sostituendo l'istruzione switch con dei comandi if..else
nidificati, state attenti a trattare appropriatamente il caso default. Riscrivete quindi questa nuova
versione, sostituendo i comandi if..else nidificati con una serie di istruzioni if; anche questa volta,
state attenti a trattare appropriatamente il caso di default (ciò sarà più difficile che con la versione dei
comandi if..else nidificati). Questo esercizio dimostrerà che il comando switch è una comodità e
che ogni switch potrà essere sostituito con istruzioni di selezione singola.
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int grade; /* un voto */
  int aCount = 0; /* numero di A */
  int bCount = 0; /* numero di B */
  int cCount = 0; /* numero di C */
  int dCount = 0; /* numero di D */
  int fCount = 0; /* numero di F */

  printf("Enter the letter grades. \n");
  printf("Enter the EOF character to end input.\n");

  /* itera finchè l'utente non digita la sequenza di tasti che
  codifica la "fine del file" */

  while ((grade = getchar()) != EOF){

    /* determina che voto è stato inserito */


 if(grade == 'A' || grade == 'a')
      ++aCount; /*incrementa aCount */

 if (grade == 'B' || grade == 'b')
      ++bCount; /*incrementa aCount */

 if (grade == 'C' || grade == 'c')
      ++cCount; /*incrementa aCount */

 if (grade == 'D' || grade == 'd')
      ++dCount; /*incrementa aCount */

 if (grade == 'F' || grade == 'f')
     ++fCount; /*incrementa aCount */

 if (grade == '\n' || grade == '\t' || grade == ' ')
        ;
 if (grade != 'a' && grade != 'A' &&
     grade != 'b' && grade != 'B' &&
     grade != 'c' && grade != 'C' &&
     grade != 'd' && grade != 'D' &&
     grade != 'f' && grade != 'F' &&
     grade != '\n' && grade != '\t' &&
     grade != ' '){
 printf("Incorret letter grade entered.");
 printf("Enter a new grade.\n");
  }

} /* fine del comando while */

/* visualizza il sommario dei risultati */

printf("\nTotals for each letter grade are: \n");
printf("A: %d\n", aCount );
printf("B: %d\n", bCount );
printf("C: %d\n", cCount );
printf("D: %d\n", dCount );
printf("F: %d\n", fCount );

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
