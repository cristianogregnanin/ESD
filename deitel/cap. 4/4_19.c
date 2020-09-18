/* ex. 4.19 Deitel C how to program */
/* Una azienda di vendita per corrispondenza vende cinque differenti prodotti i cui prezzi al
dettaglio sono mostrati nella seguente tabella:

Numero di prodotto    Prezzo al dettaglio
1                     2.98
2                     4.50
3                     9.98
4                     4.49
5                     6.87

Scrivete un programma che legga una serie di coppie di numeri come segue:

1) Numero del prodotto
2) Quantità venduta in un giorno

Il vostro programma dovrà utilizzare una istruzione switch per aiutare a determinare il Prezzo
al dettaglio di ogni prodotto. Il vostro programma dovrà calcolare e visualizzare il valore
totale al dettaglio di tutti i prodotti venduti nell'ultima settimana.*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

float uno = 2.98;
float due = 4.50;
float tre = 9.98;
float quattro = 4.49;
float cinque = 6.87;
int codice;
int quantita;
float somma;

somma = 0.0;


printf("inserisci il codice di un prodotto e la quantità venduta (-1 per finire): ");
scanf("%d%d", &codice, &quantita);

while (codice != -1){

switch (codice) {
  case 1:
    somma = quantita * uno;
    break;
  case 2:
    somma = quantita * due;
    break;
  case 3:
    somma = quantita * tre;
    break;
  case 4:
    somma = quantita * quattro;
    break;
  case 5:
    somma = quantita * cinque;
    break;
  default:
    printf("codice sbagliato");
}

printf("inserisci il codice di un prodotto(-1 per finire): ");
scanf("%d", &codice);

}

printf("il valore totale al dettaglio di oggi è: %.2f", somma);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
