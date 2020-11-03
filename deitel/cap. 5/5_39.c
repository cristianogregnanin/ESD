/* ex. 5.39 Deitel C how to program */
/* (Le torri Hanoi) Ogni informatico in erba dovrà venire alle prese con certi problemi classici
e le torri di Hannoi (consultate la Figura 5.19) è uno dei più famosi di questi. La leggenda narra che, in
un tempio dell'Estremo Oriente, alcuni preti stavano tentando di muovere una pila di dischi da un
paletto a un altro. La pila iniziale aveva 64 dischi infilati su un paletto e ordinati in misura decrescente
dal basso all'alto. i preti stavano tentando di muovere la pila da questo a un secondo paletto, rispettando
delle regole secondo le quali: poteva essere mosso esattamente un disco per volta e in nessun momento
un disco più grande poteva essere sistemato su uno più piccolo. Era disponibile un terzo paletto per riporre
temporaneamente i dischi. Secondo la leggenda, qualora i preti avessero completato il loro compito, sarebbe giunta
la fine del mondo, perciò non abbiamo molto interesse nel facilitare i loro sforzi.
  Supponiamo che i preti stiano tentando di muovere i dischi dal paletto 1 al 3. Vogliamo sviluppare
  un algoritmo che visualizzi l'esatta sequenza di trasferimenti di paletto disco per disco.
Se dovessimo affrontare questo problema con i metodi tradizionali, ci ritroveremmo presto disperatamente ingarbugliati
nella manipolazione dei dischi. Se invece affrontiamo il problema tenendo in mente la ricorsione, esso diventerà
immediatamente trattabile. Lo spostamento di n dischi potrà essere visto come lo spostamento di soli n - 1 dischi (e quindi
la ricorsione) come segue:

  1. muovere n - 1 dischi dal paletto 1 al 2, utilizzando il 3 come area di deposito temporanea.
  2. Muovere l'ultimo disco (il più grande) dal paletto 1 al 3.
  3. muovere gli n - 1 dischi dal paletto 2 al 3, utilizzando il paletto 1 come area di deposito temporanea.

Il processo terminerà quando l'ultimo compito richiederà lo spostamento di n = 1 dischi, ovverosia il caso di base.
ciò sarà eseguito semplicemente spostando il disco, senza la necessità di un'area di deposito temporanea.
Scrivete un programma che risolva il problema delle torri Hanoi. Utilizzate una funzione ricorsiva con quattro parametri:

  1. Il numero di dischi da muovere.
  2. Il paletto sul quale questi dischi saranno inizialmente infilati.
  3. Il paletto sul quale questa pila di dischi dovrà essere spostata.
  4. Il paletto che dovrà essere utilizzato come area deposito temporanea.

Il vostro programma dovrà visualizzare le istruzioni precise necessarie per lo spostamento dei dischi dal
paletto di partenza a quello di destinazione. Per esempio, per muovere una pila di tre dischi dal paletto
1 al 3, il vostro programma dovrà visualizzare la seguente serie di mosse:

1 - 3 (Questo significa muovere un disco dal paletto 1 al paletto 3)
1 - 2
3 - 2
1 - 3
2 - 1
2 - 3
1 - 3
  */

#include <stdio.h>

int main(){

void torre (int numero, int inizio, int fine, int temporaneo);

int n; /* numero di dischi */

printf("Inserisci il numero di dischi da spostare: ");
scanf("%d", &n);

torre (n, 1, 3, 2);

  return 0;
}

void torre (int numero, int inizio, int fine, int temporaneo){

  if (numero == 1){
    printf("%d --> %d\n",inizio, fine);
    return;
  }

  torre(numero - 1, inizio, temporaneo, fine);

  printf("%d --> %d\n",inizio, fine);

  torre(numero - 1, temporaneo, fine, inizio);

}
