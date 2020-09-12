/* ex_3.23 deitel*/

/* Scrivete un programma che utilizzi un ciclo, per visualizzare i numeri da 1 a 10 a fianco a fianco
   sulla stessa riga e con tre spazi tra ognuno di essi */

#include <stdio.h>

/*inizio del programma */
int main()
{

int a = 1;

while (a <= 10){
  printf("%d\t", a);
  a++;
}

return 0;
} /*fine del programma*/
