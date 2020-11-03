/* ex. 6.02 Deitel C how to program */
/* Scrivete dei comandi per portare a termine quanto segue:
*/

// a) Dichiarare la matrice table di tipo intero con 3 righe e 3 colonne. Supponete che sia stata
//    definita la costante simbolica SIZE con testo di sostituzione 3.

      int table[SIZE][SIZE];

// b) Quanti elementi conterrà la matrice table? Visualizzate il numero totale di elementi
// conterrà 9 elementi

          printf("%d\n",SIZE * SIZE);

// c) Utilizzate un comando di ripetizione for, per inizializzare ogni elemento della matrice con la somma
//    degli indici. Supponete che come variabili di controllo siano state dichiarate x e y.

      for(i=0; i<=SIZE; i++){
        for (j=0; j<= SIZE:; j++)
          table[i][J] = i + j
}
// d) Visualizzate i valori di ogni elemento della matrice table. Supponete che la matrice sia
//    stata inizializzata conla dichiarazione int table[SIZE][SIZE]= {{1,8},{2, 4, 6}, {5}}

      for (i=0; i<= SIZE; i++){
        for (j = 0; j <= SIZE; j++){
          printf("table[%d][%d] = %d\n", i, j, table[i][j] );
        }
