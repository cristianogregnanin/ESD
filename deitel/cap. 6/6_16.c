/* ex. 6.14 Deitel C how to program */
/* Etichettate gli elementi della matrice 3 per 5 sales, in modo da indicare l'ordine in cui essi
saranno azzerati dal seguente segmento di programma:

  for (row = 0; row <= 2; row++)
    for (column = 0; column <= 4; column++)
      sales[row][column] = 0;
*/

#include <stdio.h>

int main(){

  int sales[3][5];
  int row, column;

for(row=0; row <= 2; row++)
  for(column=0; column <= 4; column++){
    sales[row][column] = 0;
    printf("sales [%d][%d] = %d\n", row, column, sales[row][column]);
  }
  return 0;
}
