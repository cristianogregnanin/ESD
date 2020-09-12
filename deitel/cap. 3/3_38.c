/* ex_3.38 deitel*/

/* Scrivete un programma che visualizzi 100 asterischi uno per volta. Ogni dieci asterischi
il vostro programma dovrà visualizzare un carattere newline */

#include <stdio.h>

/*inizio del programma */
int main()
{

int i = 1;

while (i <= 100){
  printf("*");
  if (i%10 == 0)
    printf("\n");
    i++;
}

return 0;
} /*fine del programma*/
