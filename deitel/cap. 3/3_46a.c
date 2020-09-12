/* ex_3.46 deitel*/

#include <stdio.h>


int main()
{

int intero, scomp;
int numero1, numero2, numero3, numero4;


/*printf("inserisci un intero di quattro cifre: ");
scanf("%d", &intero);*/

intero = 3278;

numero1 = ((intero / 1000) + 7)%10;
scomp = intero%1000;

numero2 = ((scomp / 100)+7)%10;
scomp = scomp%100;

numero3 = ((scomp / 10)+7)%10;
scomp = scomp%10;

numero4 = (scomp +7)%10;

printf("il numero crittografato è: %d%d%d%d\n",numero3,numero4,numero1,numero2);



   return 0;
}
