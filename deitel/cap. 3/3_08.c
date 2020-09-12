/* ex_3.8 deitel*/

/* calcolare x elevato alla potenza di y. il programma deve contenere un comando di iterazione while */

int main ()
{

int x, y; /* base esponente */
int power;
int i; /* contatore */

printf("inserisci la base: ");
scanf("%d", x);

printf("inserisci l'esponente: ");
scanf("%d", y);

i = 1;
power = 1;

while (i <= y){
  power *= x;

  i++;
}

printf("il risultato è: %d\n", power);
  return 0;
}
