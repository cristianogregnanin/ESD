/* ex. 5.15 Deitel C how to program */
/* Definite una funzione hypotenuse che calcoli la lunghezza dell'ipotenusa di un triangolo
  rettangolo quando siano dati gli altri due lati. Utilizzate questa funzione in un programma che
  determini la lunghezza dell'ipotenusa per ognuno dei seguenti triangoli. La funzione dovrà
  ricevere due argomenti di tipo double e restituire l'ipotenusa come un double. Testate il
  vostro programma con i valori dei lati specificati nella Fig. 5.18.

  triangolo       LATO1  LATO2
  1               3.0    4.0

  2               5.0    12.0

  3               8.0    15.0
*/

#include <stdio.h>
#include <math.h>

int main(){

double hypotenuse (double x, double y);

double lato1, lato2;

printf("inserisci il valore dei due lati: ");
scanf("%lf%lf", &lato1, &lato2);

printf("l'ipotenusa è: %.1lf", hypotenuse(lato1, lato2));


  return 0;
}

double hypotenuse (double x, double y){

  double ipotenusa;

  ipotenusa = sqrt(pow(x, 2) + pow(y, 2));

  return ipotenusa;

}
