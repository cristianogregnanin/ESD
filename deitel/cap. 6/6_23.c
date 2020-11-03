/* ex. 6.23 Deitel C how to program */
/* (Turtle Graphics) Il linguaggio Logo, particolarmente popolare tra gli utenti di personal computer,
ha reso famoso il concetto di turtle graphics (grafici della tartaruga). Immaginate una tartaruga meccanica
che girovaga in una stanza sotto il controllo di un programma C. La tartaruga ha una penna in una delle due
posizioni, alzata o abbassata. La tartaruga traccia delle linee man mano che si muove con la penna abbassata;
quando questa è alzata, si muove liberamente senza scrivere niente. In questo problema, simulerete le operazioni della
tartaruga e creerete, allo stesso tempo, un blocchetto per gli schizzi.
  Utilizzate una matrice floor 50 per 50 e azzeratela. Leggete i comandi da un vettore che li contenga.
in ogni momento, mantenete traccia della posizione corrente della tartaruga e dello stato (alzata o abbassata)
della penna. Supponete che la tartaruga cominci sempre dalla posizione 0,0 del pavimento con la penna alzata.
L'insieme dei comandi per la tartaruga che il vostro programma dovrà elaborare è elencato in Figura 6.24.

Comando   Significato
1         Alza la penna
2         Abbassa la penna
3         Gira a destra
4         Gira a sinistra
5,10      Vai in avanti di 10 spazi (o un numero diverso da 10)
6         Visualizza la matrice 50 per 50
9         Fine dei dati (valore sentinella)

Supponete che la tartaruga sia in una qualche posizione vicina al centro del pavimento. Il seguente
"programma" disegnarebbe e visualizzerebbe un quadrato 12 per 12:

2
5,12
3
5,12
3
5,12
3
5,12
1
6
9

Man mano che la tartaruga si muoverà con la penna abbassata, imposterete gli elementi corrispondenti
della matrice floor a 1. Nel momento in cui il programma avrà impartito il comando 6 (visualizza),
stamperete un asterisco, o qualsiasi altro carattere abbiate scelto, in corrispondenza di ogni 1 incluso
nella matrice. Stamperete invece uno spazio in corrispondenza di ogni zero. Scrivete un programma c che
implementi le capacità grafiche della tartaruga discusse in questo esercizio. Scrivete diversi programmi
di turtle graphics, in modo che siano disegnate delle forme interessanti. Aggiungete altri
comandi per incrementare la potenza del vostro linguaggio.
*/

#include <stdio.h>

#define MAX 100

int operazione (float x[]); //prototipo di funzione
void getCommands (int commands[][2]);
void printArray (int a[][50]);
void scrivi (int dx, int sx, int penAlz, int penBas, int floor [][50], int direzione);

int main () {

//int floor[50][50] = {0};
int commandArray[MAX][2] = {0};
int floor [50][50] ={0};
int count = 0;
int command=0; // comando
int penAlz = 0; //penna alzata
int penBas = 0; //penna bassa
int dx = 0; //gira a destra
int sx = 0; //gira a sinistra
int direzione = 0;

getCommands(commandArray);
command = commandArray[count][0];

while (command != 9){

  switch (command) {
    case 1:
      penAlz = 1;
      penBas = 0;
      break;
    case 2:
      penBas = 1;
      penAlz = 0;
      break;
    case 3:
      dx = 1;
      sx = 0;
      break;
    case 4:
      sx = 1;
      dx = 0;
      break;
    case 5:
      direzione = commandArray[count][1];
      break;
    case 6:
      printf("\n Il disegno è:\n");
      printArray(floor);
      break;
  }
  command = commandArray[++count][0];
}

  return 0;
}//fine della funzione main

// funzione getCommands
void getCommands (int commands[][2]){

  int i=0; //contatore
  int temp; //comando temporaneo

  printf("Inserisci il comando (9 per terminare): ");
  scanf("%d", &temp );

  while(temp != 9 && i < 100) {
    commands[i][0] = temp;

    printf("Inserisci il comando (9 per terminare): ");
    scanf("%d", &temp );

    if(temp == 5){
      scanf(",%d", &commands[i][1] );
    } // end if

    i++;
  }
  i = 0;
} //fine della funzione getcommands

//funzione scrivi
void scrivi (int dx, int sx, int penAlz, int penBas, int floor [][50], int direzione){

  int i; //contatore y
  int j; //contatore x
  int posX = 0; //posizione x
  int posY = 0; //posizione y

  if(dx==1 && penAlz==1){
    posx
    for (i=0; i < direzione; i++){
        floor[posX][posY] = 1;
    }
  }
}

//funzione printArray
void printArray(int a[][50]){

  int i;
  int j;

  for (i=0; i<50; i++){
    for (j=0; j < 50; j++){
      putchar(a[i][j] ? '*' : ' ');
    }
    putchar( '\n');
  }
}
