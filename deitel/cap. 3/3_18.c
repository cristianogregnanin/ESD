/* ex_3.18 deitel*/

/* Sviluppate un programma C, che determini se il cliente di un grande magazzino abbia superato
   il limite di credito sul suo conto. Per ogni cliente saranno disponibili i seguenti dati:
      1. Il numero di conto
      2. Il saldo all'inizio del mese
      3. Il totale di tutti gli articoli che il cliente ha messo in conto, durante il mese corrente.
      4. Il totale di tutti i crediti applicati al conto di questo cliente, durante il mese corrente.
      5. Il limite di credito concesso.
  Il programma dovrà prendere in input tutti questi dati, calcolare il nuovo saldo ( = saldo iniziale
  + articoli messi in conto - credi) e determinare se il nuovo saldo superi il limite di credito del
  cliente. Per quei clienti che avranno superato il limite di credito, il programma dovrà visualizzare
  il loro numero di conto, il limite di credito, il nuovo saldo e il messaggio "Credit limit exceeded" */

#include <stdio.h>

/*inizio del programma */
int main()
{

int account;
float beginning_balance;
float tot_charges;
float tot_credits;
float credit_limits;
float balance;

printf("enter account number (-1 to end): ");
scanf("%d", &account);

while (account != -1)
{

  printf("enter beginning balance: ");
  scanf("%f", &beginning_balance);

  printf("enter total charges: ");
  scanf("%f", &tot_charges);

  printf("enter total credits: ");
  scanf("%f", &tot_credits);

  printf("enter credit limits: ");
  scanf("%f", &credit_limits);

  balance = beginning_balance + (tot_charges - tot_credits);

  if (balance >= beginning_balance)
  {
  printf("account: %d\n", account);

  printf("credit limit: %2f\n", credit_limits);

  printf("balance: %2f\n", balance);

  printf("credit limit exceede\n");
  }

  printf("enter account number (-1 to end): ");
  scanf("%d", &account);
}

return 0;
} /*fine del programma*/
