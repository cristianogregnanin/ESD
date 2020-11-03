/* ex. 6.09 Deitel C how to program */
/* Considerate la matrice di interi t di dimensioni 2 per 5.
*/

// a) Scrivete una dichiarazione per t.

//     int t [2][5];

// b) Quante righe avrà t?

//   2

// c) quante colonne avrà t?

//   5

// d) Quanti elementi avrà t?

//   2 * 5 = 10

// e) Scrivete i nomi di tutti gli elementi contenuti nella seconda riga di t.

//    t[1][0], t[1][1], t[1][2], t[1][3], t[1][4]

// f) Scrivete i nomi di tutti gli elementi contenuti nella terza colonna di t:

//    t[0][2], t[1][2];

// g) Scrivete una singola istruzione che azzeri gli elementi di t contenuti nella riga 1 e nella colonna 2.

//    t[1][2] = 0;

// h) Scrivete una serie di istruzioni che azzerino ogni elemento di t. Non utilizzate la struttura di ripetizione.

/*   t[0][0] = 0;
     t[0][1] = 0;
     t[0][2] = 0;
     t[0][3] = 0;
     t[0][4] = 0;
     t[1][0] = 0;
     t[1][1] = 0;
     t[1][2] = 0;
     t[1][3] = 0;
     t[1][4] = 0;    */

// i) Scrivete una struttura for nidificata che azzeri ogni elemento di t.

/*   for(i=0; i<=1; i++){
      for(j=0; j<=4, j++){
        i[i][j] = 0;
      }
    }

// j) Scrivete un'istruzione che prenda in input dal terminale i valori per gli elementi di t.

/*   for(i=0; i<=1; i++){
      for(j=0; j<=4, j++){
        scanf("%d", i[i][j] );
      }
    }                   */

// k) Scrivete una serie di istruzioni che determinino e visualizzino il valore più piccolo
//    contenuto nella matrice t.

/*    small = t[0][0];

    for(i=0; i<=1; i++){
      for(j=0; j<=4, j++){
        if(t[i][j] < small)
          small = t[i][j];
      }
    }                      */

// l) Scrivete un'istruzione che visualizzi gli elementi contenuti nella prima riga di t.

/*    for(i=0; i<=4; i++){
        printf("%d", t[0][i]);
      }                         */

// m) Scrivete un'istruzione che sommi gli elementi contenuti nella quarta colonna di t.

//    sum = t[0][3] + t[1][3];

// n) Scrivete una serie di istruzioni che visualizzino la matrice t in un formato tabulare ordinato.
//    Utilizzate gli indici delle colonne come intestazioni da porre in cima alla tabella e, allo stesso modo,
//    visualizzate gli indici delle righe a sinistra di ognuna di esse.

/*    printf("0\t1\t2\t\3\t4\n");

      for (i=0; i <= 1; i++){
        printf("%d", i );

        for (j=0; j<=4; j++){
          printf("%d\t", t[i][j]);
        }
        printf("\n");
      }                           */
