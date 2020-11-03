/* ex. 5.24 Deitel C how to program */
/* Implementate le seguenti funzioni intere:

a) La funzione celsius restituisce Celsius di una temperatura Fahrenheit
(utilizzate la formula C = (5/9) * (F -32), dove c rappresenta la temperatura in gradi celsius
e F quella in gradi Fahrenheit.

b) La funzione fahrenheit restituisce l'equivalente Fahrenheit di una temperatura celsius
(utilizzate la formula F = (9/5) + C + 32), dove C rappresenta la temperatura in gradi celsius
e F quella in gradi Fahrenheit.

c) Utilizzate queste funzioni per scrivere un programma che visualizzi delle tabelle che
mostrino gli equivalenti Fahrenheit di tutte le temperature Celsius comprese tra 0 e 100 gradi,
nonchè gli equivalenti celsius di tutte le temperature Fahrenheit comprese tra 32 e 212 gradi.
Visualizzate i risultati in una forma tabulare ordinata che minimizzi il numero di
righe dell'output, pur rimanendo leggibile.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int celsius (int a);
int fahrenheit (int a);

int i; /* contatore */

printf("Fahrenheit\tCelsius\n\n");

for (i = 32; i<=212; i++){

  printf("%d\t\t%d\n", i, celsius(i));
}

printf("\nCelsius\t\tFahrenheit\n\n");

for (i = 0; i<=100; i++){

  printf("%d\t\t%d\n", i, fahrenheit(i));
}

  return 0;
}

int celsius (int a){

  return (int) ((5.0/9.0) * (a - 32));
}

int fahrenheit (int a){

  return (int) ((9.0/5.0) * (a + 32));
}
