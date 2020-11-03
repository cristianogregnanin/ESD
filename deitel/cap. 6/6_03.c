/* ex. 6.02 Deitel C how to program */
/* Rispondete alle seguenti domande riguardanti un vettore chiamato fractions.
*/

// a) Definite una costante simbolica SIZE che possa essere rimpiazzata dal testo di sostituzione 10.

      #define SIZE 10

// b) Dichiarate un vettore con SIZE elementi di tipo double e inizializzateli a 0.

      double fractions[SIZE] = {0};

// c) Puntate al quarto elemento dall'inizio del vettore.

      fraction[4]

// d) Fate riferimento all'elemento 4 del vettore.

      fraction[5]

// e) Assegnate il valore 1,667 all'elemento nove del vettore.

      fractions[9] = 1.667;

// e) Assegnate il valore 3,333 al settimo elemento del vettore

      fractions[6] = 3.333;

// g) Visualizzate gli elementi 6 e 9 del vettore, con due cifre di precisione a destra della virgola
//    decimale e mostrare l'output che sarà effettivamente visualizzato sullo schermo.

      printf("%.2f %.2f\n", fractions[ 6 ], fraction[ 9 ] );

// h) Visualizzate tutti gli elementi del vettore usando il comando di ripetizione for. Supponete
//    che sia stata definita la variabile intera x per controllare il ciclo. Mostrate l'output.

      for(i = 0; i <= SIZE; i++){
        printf("%.2f\n", fractions[i] );
      }
