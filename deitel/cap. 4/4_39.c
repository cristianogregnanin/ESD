/* ex. 4.39 Deitel C how to program */
/* Descrivete in generale come rimuovereste tutte le istruzioni continue dal ciclo di un programma,
e come le sostituireste con qualche istruzione strutturata equivalente. Utilizzate la tecnica che avete
sviluppato in questo esercizio per rimuovere l'istruzione continue dal programma della figura 4.12.

devi usare un condizionale if
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int x;

for (x = 1; x <= 10; x++){

  if(x == 5)
    ++x;

  printf("%d\t", x );
}

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
