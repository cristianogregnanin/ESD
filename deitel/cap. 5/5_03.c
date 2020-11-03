/* ex. 5.03 Deitel C how to program */
/* Scrivete un programma che controlli se gli esempi di chiamte a funzioni della libreria
   matematica mostrati nella figura 5.2 producano davvero i risultati indicati*/

#include <stdio.h>
#include <math.h>

/* l'esecuzione del programma inizia con la funzione main */
int main(){

printf("la radice quadrata di 900 è : %.1f\n", sqrt(900.0));
printf("la radice quadrata di 9 è : %.1f\n", sqrt(9.0));

printf("La funzione esponenziale di di 1 è: %.1f\n", exp(1.0));
printf("La funzione esponenziale di di 2 è: %.1f\n", exp(2.0));

printf("Il logaritmo di 2.718282 è : %.1f\n", log(2.718282));
printf("Il logaritmo di 7.389056 è: %.1f\n", log(7.389056));

printf("Il logaritmo in base 10 di 1 è: %.1f\n", log10(1.0));
printf("Il logaritmo in base 10 di 10 è: %.1f\n", log10(10.0));
printf("Il logaritmo in base 10 di 100 è: %.1f\n", log10(100.0));

printf("Il valore assoluto di 5 è: %.1f\n", fabs(5.0));
printf("Il valore assoluto di 0 è: %.1f\n", fabs(0.0));
printf("Il valore assoluto di -5 è: %.1f\n", fabs(-5.0));

printf("Il valore arrotondato per eccesso di 9.2 è: %.1f\n", ceil(9.2));
printf("Il valore arrotondato per eccesso di -9.8 è: %.1f\n", ceil(-9.8));

printf("Il valore arrotondato per difetto di 9.2 è: %.1f\n", floor(9.2));
printf("Il valore arrotondato per difetto di -9.8 è: %.1f\n", floor(-9.8));

printf("Il valore di 2 elevato a 7 è: %.1f\n", pow(2, 7));
printf("Il valore di 9 elevato a 0.5 è: %.1f\n", pow(9, .5));

printf("Il resto di 13.667/2.333 è: %.1f\n", fmod(13.667, 2.333));

printf("il valore del seno di 0 è: %.1f\n", sin(0.0));

printf("il valore del coseno di 0 è: %.1f\n", cos(0.0));

printf("il valore della tangente di 0 è: %.1f\n", cos(0.0));

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione */
