/* ex_3.21 deitel*/

/* Sviluppate un programma che determini la paga lorda per ognuno dei diversi impiegati.
   L'azienda, per le prime 40 ore lavorate da ogni impiegato, paga il "salario orario base", mentre
   per tutte le ore lavorate in aggiunta alle 40, elargisce "una volta e mezza il salario di base".
   Vi sono stati forniti: una lista degli impiegati dell'azienda, il numero di ore lavorate
   da ogni impiegato nell'ultima settimana e il salario orario di base di ogni impiegato. Il
   vostro programma dovrà prendere in input, per ogni impiegato, le suddette informazioni e dovrà
   quindi determinare e visualizzare la paga lorda di ognuno di loro.*/

#include <stdio.h>

/*inizio del programma */
int main()
{

float salario, stipendio, straordinario;
int ore;


printf("inserire le ore di lavoro (-1 to end): ");
scanf("%d", &ore);

while (ore != -1)
{
  printf("inserisci salario di base: ");
  scanf("%f", &salario);

  if (ore <= 40)
    stipendio = ore * salario;
  else
  {
    straordinario = (ore - 40) * (salario * 1.5);
    stipendio = 40 * salario + straordinario;
  }

printf("lo stipendio è: %.2f\n\n", stipendio);

printf("inserire le ore di lavoro (-1 to end): ");
scanf("%d", &ore);
}

return 0;
} /*fine del programma*/
