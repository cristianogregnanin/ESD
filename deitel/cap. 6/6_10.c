/* ex. 6.10 Deitel C how to program */
/* Utilizzate un vettore unidimensionale per risolvere il seguente problema. un'azienda retribuisce
i suoi venditori con delle provvigioni. Un venditore riceve $200 la settimana più il 9 per cento delle
proprie vendite lorde portate a termine in quella settimana. Per esempio, un venitore che faccia incassare
$ 3000 di venduto lordo, in una settimana, riceverà $ 200 più il 9 per cento di $ 3000, ovverosia un totale di
$ 470. Scrivete un programma C, utilizzando un vettore di contatori che determini quanti venditori abbiano guadagnato
una retribuzione compresa in ognuno dei seguenti intervalli (supponete che la retribuzione di ogni venditore
sia troncata a una somma intera):

a) $200-$299
b) $300-$399
c) $400-$499
d) $500-$599
e) $600-$699
f) $700-$799
g) $800-$899
h) $900-$999
i) $1000 e oltre
*/

#include <stdio.h>

int main(){

  int salario = 0; // salario corrente
  int salari [9] = {0}; // array salari
  int lordo; // vendita lorda

  printf("inserisci la vendita lorda di un venditore (-1 to end): ");
  scanf("%d", &lordo);

  while(lordo != -1){

    salario = 200 + ((lordo * 9) / 100);

    printf("la commissione è: %d\n", salario );

    if (salario >= 200 && salario < 1000){
      ++salari[(int) (salario / 100)-2];
    } else
      ++salari[8];

    printf("inserisci la vendita lorda di un venditore (-1 to end): ");
    scanf("%d", &lordo);
  }

  printf("venditori nel range\n");
  printf("$200-$299: %d\n", salari[0]);
  printf("$300-$399: %d\n", salari[1]);
  printf("$400-$499: %d\n", salari[2]);
  printf("$500-$599: %d\n", salari[3]);
  printf("$600-$699: %d\n", salari[4]);
  printf("$700-$799: %d\n", salari[5]);
  printf("$800-$899: %d\n", salari[6]);
  printf("$900-$999: %d\n", salari[7]);
  printf("$1000 e oltre: %d\n", salari[8]);
}
