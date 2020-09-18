/* ex. 4.26 Deitel C how to program */
/* Calcolate il valore di pi a partire dalla serie infinita

pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...

Visualizzate una tabella che mostri il valore di pi approssimato da uno, due, tre ... termini di
questa serie. Quanti termini di questa serie dovrete utilizzare, prima di ottenere 3.14? 3.141?
3.1415? 3.14159? */

#include <stdio.h>

int main(){

float pi = 4.0;
int i = 3;
int j = 1;

while(i <= 400000){
  if (j % 2 != 0)
    pi -= (float) 4/i;
  else
    pi += (float) 4/i;

  i += 2;
  j++;
}

printf("%f", pi );



  return 0;
}
