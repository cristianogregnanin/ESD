/* ex_3.41 deitel*/

/* Scrivete un programma che legga il raggio di un cercho (come valore di tipo float) e
quindi calcoli e visualizzi il diametro, la circonferenza e l'area. utilizzate il valore 3.14159 per PI */

#include <stdio.h>

/*inizio del programma */
int main()
{

float pi = 3.14159;
float raggio, diametro, circonferenza, area;

printf("inserisci il raggio del cerchio: ");
scanf("%f", &raggio);

diametro = raggio * 2;
printf("Il diametro è: %2.f\n", diametro);

circonferenza = 2 * pi * raggio;
printf("La circonferenza è: %2.f\n", circonferenza);

area = pi * (raggio * raggio);
printf("L'area è: %.2f\n", area);

return 0;
} /*fine del programma*/
