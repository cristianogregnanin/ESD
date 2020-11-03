/* ex. 5.45 Deitel C how to program */
/* Scrivete una funzione distance che calcoli la distanza tra due punti (x1, y1) e (x2, y2). Tutti i
numeri e i valori restituiti dovranno essere di tipo double
  */

#include <stdio.h>
#include <math.h>

// l'esecuzione del programma inizia dalla funzione main

double distance (double a, double b, double x, double y);

int main(){

double a, b;
double x, y;
double risultato;

printf("inserisci le prime due coordinate: ");
scanf("%lf%lf", &a, &b );

printf("inserisci le seconde due coordinate: ");
scanf("%lf%lf", &x, &y );

risultato = distance(a, b, x, y);

printf("la distanza tra (%.2f %.2f) e (%.2f %.2f) è %.2f", a, b, x, y, risultato);

  return 0;
} // fine

double distance (double a, double b, double x, double y){

  double distanza;

  distanza = sqrt(pow(a - x, 2) + pow(b - y, 2));

  return distanza;
}
