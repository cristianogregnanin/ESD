/* ex. 5.35 Deitel C how to program */
/* Scrivete un programma C che proponga il gioco "indovina il numero" nel modo seguente: il
vostro programma sceglierà il numero da indovinare, selezionando un intero a caso compreso nell'intervallo
da 1 a 1000. Il programma quindi visualizzerà:

  I have a number between 1 and 1000.
  Can you guess my number?
  Please type your first guess.

  Il giocatore allora digiterà una prima ipotesi. il programma risponderà con una delle seguenti frasi:

    1) Execellent! You guessed the number!
       Would you like to play again (y or n)?
    2) Too low. Try again.
    3) Too high. Try again.

Qualora l'ipotesi del giocatore sia sbagliata, il vostro programma dovrà reiterare finchè il giocatore non
avrà finalmente indovinato il numero corretto. il vostro programma dovrà continuare a indicare Too High o Too low,
per aiutare il giocatore a "prendere la mira" sulla risposta corretta. [Nota: la tecnica di ricerca impegata in questo
problema è detta ricerca binaria. Diremo qualcosa in più su ciò nel prossimo problema.]
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

  while (continua == 1){

  number = (rand() % 999) + 1;

  printf("I have a number between 1 and 1000\nCan you guess my number\nPlease type your first guess ");

  scanf("%d", &risposta);

  while (risposta != number){

  if (risposta < number)
    printf("Too low. Try again.");
  else if (risposta > number)
    printf("Too high. Try again.");

  scanf("%d", &risposta);
}

  printf("Execellent! You guessed the number!\nWould you like to play again (1-y or 2-n)");
  scanf("%d", &continua);

}

return 0;
}
