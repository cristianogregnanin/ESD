/* ex_3.35 deitel*/

/* Scrivete un programma che legga in input un intero di cinque cifre e
determini se si tratta o no di un palindromo. */

#include <stdio.h>

/*inizio del programma */
int main()
{

  int numero;
  int uno, due, tre, quattro, cinque;

  numero = 54345;

/*printf("inserisci la dimensione del lato (tra 1 e 20): ");
scanf("%d", &lato); */

cinque = numero%10;
printf("%d\n", cinque);

quattro = (numero/10)%10;
printf("%d\n", quattro);

tre = (numero/100)%10;
printf("%d\n", tre);

due = (numero/1000)%10;
printf("%d\n", due);

uno = (numero/10000)%10;
printf("%d\n", uno);

if (uno == cinque && due == quattro)
  printf("il numero è palindromo\n");
else
  printf("il numero non è palindromo\n");

return 0;
} /*fine del programma*/
