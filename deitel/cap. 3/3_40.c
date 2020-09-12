/* ex_3.40 deitel*/

/* Scrivete un programma che visualizzi una scacchiera. il programma dovrà
utilizzare soltanto tre istruzioni printf, una per ognuna delle forme seguenti:

printf("* ");
printf(" ");
printf("\n"); */

#include <stdio.h>

/*inizio del programma */
int main()
{

int i = 1;
int j = 1;

while (i<=8){
  if (i%2 == 0)
    printf(" ");
  while (j <= 8){
      printf("* ");
      j++;
  }
  j=1;
  printf("\n");
  i++;
}
return 0;
} /*fine del programma*/
