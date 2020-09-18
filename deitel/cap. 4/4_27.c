/* ex. 4.27 Deitel C how to program */
/* (terne pitagoriche) Un triangolo rettangolo può avere i lati che siano tutti interi.
L'insieme dei tre valori interi per i lati di un triangolo rettangolo è detto terna pitagorica.
Questi tre lati devono soddisfare la relazione la quale la somma dei quadrati dei due cateti
è uguale al quadrato della ipotenusa. Trovate tutte le terne pitagoriche per lato1, lato2 e
ipotenusa che non siano maggiori di 500. Utilizzate un triplo ciclo for nidificato che provi
semplicemente tutte le possibilità. Questo è un esempio di elaborazione con "forza bruta". non
piace a molti dal punto di vita estetico. Esistono però molte ragioni per cui queste tecniche Esistonoimportanti.
In primo luogo, come apprenderete nei corsi più avanzati di informatica, c'è un gran numero di
problemi interessanti per i quali non esiste nessun approccio algoritmico noto diverso da quello
della forza bruta. In questo libro investigheremo su molti tipi di metodologie per la soluzione
dei problemi. Considereremo molti approcci con forza bruta a diversi problemi interessanti.  */

#include <stdio.h>

int main(){

int cateto1, cateto2, ipotenusa;
int i, j, k;

for(i=1; i<=500; i++){
  cateto1 = i*i;
  for(j=1; j<=500; j++){
    cateto2 = j*j;
    for(k=1; k<=500; k++){
    ipotenusa = k*k;

    if(cateto1+cateto2 == ipotenusa)
      printf("%d %d %d è una terna pitagorica\n", i,j,k );
    }
  }
}


  return 0;
}
