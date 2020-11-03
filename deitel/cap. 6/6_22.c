/* ex. 6.22 Deitel C how to program */
/* Utilizzate una matrice per risolvere il seguente problema. Un'azienda ha quattro venditori (numerati da 1 a 4)
che vendono cinque differenti prodotti (numerati da 1 a 5). Una volta al giorno, ognuno dei venditori fornisce un
tagliando per ogni tipo di prodotto venduto. Ogni tagliando contiene:
  1. il numero del venditore
  2. il numero del prodotto
  3. Il valore totale, espresso in dollari, del venduto giornaliero di quel prodotto
Di conseguenza, ogni venditore fornisce tra 0 e 5 tagliandi al giorno. Supponete che siano disponibili
i dati dei tagliandi dell'ultimo mese. Scrivete un programma che legga le suddette informazioni, riguardanti
il venduto dell'ultimo mese, e sommi le vendite totali per venditore e per prodotto. Tutti i totali dovranno essere
immagazzinati nella matrice sales. Dopo avere elaborato tutte le informazioni dell'ultimo mese, visualizzate i risultati
in formato tabulare in modo che le colonne rappresentino i vari venditori e le righe rappresentino i singoli prodotti.
Sommate ogni riga, in modo da ottenere le vendite totali dell'ultimo mese per ognuno dei prodotti; sommate ogni colonna,
in modo da ottenere il totale delle vendite dell'ultimo mese per ognuno dei venditori. La vostra stampa tabulare
dovrà includere i suddetti totali a destra delle righe e in fondo alle colonne.
*/

#include <stdio.h>

int main () {

int venditore, prodotto;
double valore;
double sales[5][6] = {{0.0},{0.0}};
int i, j;
double somma = 0.0;
double sum = 0.0;

printf("Inserisci in ordine il numero del venditore, del prodotto e il valore totale:\n"
       "(digita -1 per finire)\n");
scanf("%d", &venditore);

while (venditore != -1){
  scanf("%d%lf", &prodotto, &valore );
  sales[venditore-1][prodotto-1] = valore;
  scanf("%d", &venditore );
}

printf("\t1\t2\t3\t4\t5\n\n");

for(i=0; i<4; i++){
  printf("%d\t", i + 1 );
  for(j=0; j<6; j++){
    if(j==5)
      sales[i][j] = somma;
    printf("%.1lf\t", sales[i][j]);
    somma += sales [i][j];
   }
  printf("\n");
  somma = 0.0;
}
printf("\t");

for (i = 0; i<5; i++){
  for(j= 0; j<4; j++)
    sum += sales[j][i];
  sales[4][i] = sum;
  printf("%.1lf\t", sales[4][i]);
  sum = 0.0;
}
  return 0;
}
