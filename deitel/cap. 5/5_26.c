/* ex. 5.26 Deitel C how to program */
/* Un numero intero è detto numero perfetto qualora la somma dei suoi fattori, incluso 1
(ma non se stesso), sia pari a quel numero. Per esempio 6 è un numero perfetto perchè
6 = 1 + 2 + 3. Scrivete una funzione perfect che determini se il parametro number sia un numero perfetto.
Utilizzate questa funzione in un programma che determini e visualizzi tutti i numri perfetti tra 1 e 1000.
Visualizzate i fattori di ogni numero perfetto, per confermare che lo sia veramente. Sfidate la potenza
del vostro computer, provando con numeri maggiori di 1000. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int perfect (int a);
int numeriPerfetti;

int i;


for (i=1; i<=1000; i++){

  numeriPerfetti = perfect(i);

  if (numeriPerfetti)
    printf("%d\n", i);
}
  return 0;
}

int perfect (int a){

  int sommaDivisori = 0;
  int i;

  for (i=1; i<= a / 2; i++){

    if (a % i == 0)
      sommaDivisori += i;
  }

if (sommaDivisori == a){
  return 1;
} else{
 return 0; }

}
