/* ex. 5.29 Deitel C how to program */
/* Il massimo comune divisore (MCD) di due interi è l'intero più grande che possa dividere
esattamente ognuno dei due numeri. Scrivete una funzione gcd che restituisca il massimo comune
divisore di due interi.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int massimoComuneDivisore (int a, int b);
int num1, num2;

printf("inseriscidue numeri interi: ");
scanf("%d%d", &num1, &num2);

printf("il MCD di %d e %d è %d\n", num1, num2, massimoComuneDivisore(num1, num2));

  return 0;
}

int massimoComuneDivisore (int a, int b){

int i;
int mcd = 0;

for (i=1; i<=a; i++){
  if (a % i == 0){
    if(b % i == 0)
      mcd = i;
  }
}

return mcd;
}
