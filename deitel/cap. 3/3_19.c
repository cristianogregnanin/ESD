/* ex_3.19 deitel*/

/* Una grande industria chimica retribuisce i propri venditori basandosi sulle provvigioni.
   Il venditore riceve $200 la settimana più il 9% delle proprie vendite lorde portate a terminare
   durante la settimana. Per esempio, un venditore che in una settimana venda prodotti chimici per
   un valore di $5000, riceverà $200 più il 9% di $5000, ovverosia un totale di $650. Scrivete un
   programma, che prenda in input le vendite lorde di ogni venditore per l'ultima settimana e quindi
   calcoli e visualizzi il salario per ognuno di loro. Elaborate i conti di un venditore per volta.*/

#include <stdio.h>

/*inizio del programma */
int main()
{

float sales, salary;

printf("enter sales in dollars (-1 to end): ");
scanf("%f", &sales);

while (sales != -1)
{

  salary = 200 + ((sales * 9)/100);

  printf("Salary is: %.2f\n\n", salary);

  printf("enter sales in dollars (-1 to end): ");
  scanf("%f", &sales);
}

return 0;
} /*fine del programma*/
