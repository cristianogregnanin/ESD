/* ex_3.29 deitel*/

#include <stdio.h>

/*inizio del programma */
int main()
{

int count = 1;

while (count <= 10){

  printf("%s\n", count%2 ? "****" : "++++++++" );
  count++;
}

return 0;
} /*fine del programma*/
