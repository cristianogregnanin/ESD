/* ex. 5.27 Deitel C how to program */
/* Un intero è detto primo qualora sia divisibile per 1 e per se stesso. Per esempio 2, 3, 5,
e 7 sono primi, mentre 4, 6, 8 e 9 non lo sono.
  a) Scrivete una funzione che determini se un numero sia primo.
  b) Utilizzate questa funzione in un programma che determini e visualizzi tutti i numeri primi
     tra 1 e 10000. Quanti di questi 10000 numeri dovrete realmente verificare prima di
     essere sicuri di aver trovato tutti i numeri primi?
  c) Inizialmente potreste pensare che n/2 sia il limite superiore che dovrete verificare per vedere
     se un numero sia primo, ma in realtà vi basterà arrivare alla radice quadrata di n. Perchè?

Riscrivete il programma e fatelo eseguire in entrambi i modi. Stimate il moglioramento
delle prestazioni.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int primi (int a);
int i;

for (i=1; i<= 10000; i++){

if (primi(i))
  printf("%d\n", i);
}

  return 0;
}

int primi (int a){

  if (a != 2 && a != 3){

    if (a % 2 == 0 || a % 3 == 0)
      return 0;
    else
      return 1;

}
else{
  return 1;
  }
}
