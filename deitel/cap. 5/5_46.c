/* ex. 5.44 Deitel C how to program */
/* Cosa farà il seguente programma? -- stamperà i caretteri al contrario
  */

#include <stdio.h>

// l'esecuzione del programma inizia dalla funzione main

int main(){

  int c; // variabile per memorizzare il carattere inserito dall'utente

  if ( ( c = getchar()) != EOF){
    main();
    printf("%c", c);
  } // fine del comando if

  return 0;
} // fine
