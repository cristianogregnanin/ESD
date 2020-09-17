/* ex. 4.17 Deitel C how to program */
/* Riscuotere il denaro diventa sempre più difficile nei periodi di recessione, per questo motivo le
aziende potrebbero restringere i loro limiti di credito, per evitare che i propri conti di credito
(il denaro loro dovuto) diventino troppo sostanziosi. Come risposta a una recessione prolungata,
una azienda ha dimezzato il limite di credito dei propri clienti. Di conseguenza, se un particolare
cliente avesse avuto un limite di credito di $5000, questo sarebbe ora di $2500. Scrivete un programma che
analizzi lo stato di credito per tre clienti di questa azienda. Per ogni cliente vi saranno forniti:

1. Il numero di conto del cliente
2. Il limite di credito del cliente prima della recessione
3. Il saldo corrente del cliente (vale a dire, l'ammontare che il cliente deve all'azienda).

Il vostro programma dovrà calcolare e visualizzare il nuovo limite di credito, per ogni cliente, e dovrà
anche determinare (e visualizzare) quali di loro hanno dei saldi correnti che eccedono il loro nuovo
limite di credito. */

#include <stdio.h>
#include <math.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int numeroConto;
int limiteCredito;
int saldo;
float nuovoLimite;
int i;

for (i=1; i<=3; i++){
  printf("inserisci il numero del conto,"
          "il limite di credito e il saldo corrente: ");
  scanf("%d%d%d", &numeroConto, &limiteCredito, &saldo);

  nuovoLimite = (float) limiteCredito/2.0;

  printf("il nuovo limite di credito per il conto %d è %.2f\n", numeroConto, nuovoLimite);

  if (saldo > nuovoLimite)
    printf("il conto supera il nuovo limite\n");
}

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
