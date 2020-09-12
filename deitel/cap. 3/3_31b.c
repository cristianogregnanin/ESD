/* ex_3.31 deitel*/

/* determinare l'output d'ognuna delle seguenti istruzioni quando x è 9 e y è 11
e quando x è 11 e y è 9 */

#include <stdio.h>

/*inizio del programma */
int main()
{

int x = 9;
int y = 11;

if (x < 10){
if (y > 10)
printf("*****\n");
}
else {
printf("#####\n");
printf("$$$$$\n");
}

return 0;
} /*fine del programma*/
