/* ex. 4.33 Deitel C how to program */
/* Scrivere un programma che visualizzi una tabella contenente tutti i numeri romani equivalenti
a quelli decimali compresi nell'intervallo da 1 a 100.
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int counter;
int div;
int mod;

printf("Numeri\nRomani\t\tDecimali\n");

for (counter = 1; counter <= 100; counter++){
  div = counter / 10;
  mod = counter % 10;

  switch(div) {

    case 0:
      break;

    case 1:
      printf("X");
      break;

    case 2:
      printf("XX");
      break;

    case 3:
      printf("XXX");
      break;

    case 4:
      printf("XL");
      break;

    case 5:
      printf("L");
      break;

    case 6:
      printf("LX");
      break;

    case 7:
      printf("LXX");
      break;

    case 8:
      printf("LXXX");
      break;

    case 9:
      printf("XC");
      break;

    case 10:
      printf("C");
      break;

    default:
      break;
  }

  switch(mod) {

    case 0:
      printf("\t\t%4d\n", div * 10 + mod);
      break;

    case 1:
      printf("I\t\t%4d\n", div * 10 + mod);
      break;

    case 2:
      printf("II\t\t%4d\n", div * 10 + mod);
      break;

    case 3:
      printf("III\t\t%4d\n", div * 10 + mod);
      break;

    case 4:
      printf("IV\t\t%4d\n", div * 10 + mod);
      break;

    case 5:
      printf("V\t\t%4d\n", div * 10 + mod);
      break;

    case 6:
      printf("VI\t\t%4d\n", div * 10 + mod);
      break;

    case 7:
      printf("VII\t\t%4d\n", div * 10 + mod);
      break;

    case 8:
      printf("VIII\t\t%4d\n", div * 10 + mod);
      break;

    case 9:
      printf("IX\t\t%4d\n", div * 10 + mod);
      break;

    case 10:
      printf("X\t\t%4d\n", div * 10 + mod);
      break;
  }
}

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
