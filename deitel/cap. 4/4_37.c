/* ex. 4.37 Deitel C how to program */
/* Una critica alle istruzioni break e continue è che non sono strutturate. In realtà le istruzioni
break e continue possono sempre essere sostituite con istruzioni strutturate, sebbene farlo possa
essere scomodo. Descrivete in generale come rimuovereste tutte le istruzioni break dal ciclo di un
programma, e come le sostituireste con qualche istruzione strutturata equivalente. [suggerimento: l'istruzione
break abbandona un ciclo dall'interno del suo corpo. L'altra maniera per abbandonarlo è facendo
in modo che il controllo di continuazione del ciclo fallisca. Nel controllo di continuazione del ciclo,
considerate l'utilizzo di un secondo controllo che indichi "uscita anticipata a causa di una condizione
di "break".] utilizzate la tecnica che avete appreso in questo esercizio per rimuovere l'istruzione di interruzione
dal programma della figura 4,11.


serve un valore sentinella per interrompere il ciclo
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int x;
int uscita = 1;

for (x=1; x <= 10 && uscita == 1; x++){

  if (x == 4){
    uscita = -1;
  }

  printf("%d ",x);
}

printf("\n Il loop si è fermato a x = %d\n", x);

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
