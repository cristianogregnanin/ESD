/* ex_3.39 deitel*/

/* Scrivete un programma che legga in input un intero e, in seguito, determini e visualizzi quanti
7 sono compresi nelle cifre dell'intero */

#include <stdio.h>

/*inizio del programma */
int main()
{

int numero = 14775;
int copia, digit;
int fattore = 10000;
int seven = 0;

copia = numero;

while (fattore >= 1){
  digit = copia/fattore;

  if (digit == 7)
    seven++;

  copia %= fattore;
  fattore /= 10;
}


printf("i sette sono %d\n", seven);

return 0;
} /*fine del programma*/
