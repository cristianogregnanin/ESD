/* ex. 5.08 Deitel C how to program */
/* Mostrate il valore di x dopo che sarà stata eseguita ognuna delle seguenti istruzioni: */

#include <stdio.h>
#include <math.h>

int main(){

  float x;

  x = fabs (7.5);
  printf("il valore di x è: %.1f\n", x);

  x = floor (7.5);
  printf("il valore di x è: %.1f\n", x);

  x = fabs (0.0);
  printf("il valore di x è: %.1f\n", x);

  x = ceil (0.0);
  printf("il valore di x è: %.1f\n", x);

  x = fabs (-6.4);
  printf("il valore di x è: %.1f\n", x);

  x = ceil (-6.4);
  printf("il valore di x è: %.1f\n", x);

  x = ceil (-fabs( -8+floor( -5.5)));
  printf("il valore di x è: %.1f\n", x);

  return 0;
}
