/* ex. 5.36 Deitel C how to program */
/* Modificate l'esercizio 5.35 in modo da contare il numero di tentativi del giocatore. Qualora il
numero sia inferiore o uguale a 10, visualizzate "Either you know the secret or you got lucky!".
Qualora il giocatore indovini il numero in 10 tentativi, visualizzate "Ahah! you know the secret!".
Qualora il giocatore faccia più di 10 tentativi, visualizzate "You should be able to do better!".
Per quale motivo non dovranno essere consentiti più di 10 tentativi? Ebbene con ogni "buona ipotesi"
il giocatore dovrebbe essere in grado di eliminare la metà dei numeri. Dimostrate ora in che modo
ogni numero tra 1 e 1000 possa essere indovinato in 10 tentativi o meno.
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int risposta (void);

while (risposta() != 0){
  ;
}

printf("grazie di aver giocato");

  return 0;
}

int risposta (void){

  int number;
  int risposta;
  int continua = 1;
  int contatore;

  while (continua == 1){

  contatore = 0;

  number = (rand() % 999) + 1;

  printf("I have a number between 1 and 1000\nCan you guess my number\nPlease type your first guess ");

  scanf("%d", &risposta);
  contatore++;

  while (risposta != number){

  if (risposta < number)
    printf("Too low. Try again.");
  else if (risposta > number)
    printf("Too high. Try again.");

  scanf("%d", &risposta);
  contatore++;
}

  printf("Execellent! You guessed the number!\n");

  if (contatore <= 10)
    printf("Either you know the secret or you got lucky!\n");
  else if (contatore == 10)
    printf("Ahah! you know the secret!\n");
  else
    printf("You should be able to do better!\n");

printf("Would you like to play again (1-y or 2-n)");
scanf("%d", &continua);

}

return 0;
}
