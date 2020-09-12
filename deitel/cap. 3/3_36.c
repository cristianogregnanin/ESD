/* ex_3.36 deitel*/

/* Prendete in input un intero binario e visualizzate il suo equivalente binario */

#include <stdio.h>

/*inizio del programma */
int main()
{

  int binary;
  int number;
  int decimal = 0;
  int highBit = 16;
  int factor = 10000;

  printf("Enter a binary number (5 digits maximum): ");
  scanf("%d", &binary);

  number = binary;

  while (highBit >= 1){

    decimal += binary / factor * highBit;

    highBit /= 2;

    binary %= factor;

    factor /= 10;
  }

  printf ("The decimal equivalent of %d is %d\n", number, decimal);

return 0;
} /*fine del programma*/
