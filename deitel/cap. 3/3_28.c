/* ex_3.28 deitel*/

/* modificare il programma della figura 3.10 in modo da convalidare l'input.
  Reiterare su ogni input, qualora il valore immesso fosse diverso da 1 o da 2, finchè l'utente non
  immetta un valore corretto.*/


#include <stdio.h>

/*inizio del programma */
int main()
{

int passes = 0;
int failures = 0;
int student = 1;
int result;

while (student <= 10){

  printf("Enter result (1=pass, 2=fail): ");
  scanf("%d", &result);

  while (result != 1 && result != 2){

    printf("the inuput is wrong\n");
    printf("Enter result (1=pass, 2=fail): ");
    scanf("%d", &result);

  }

  if (result == 1){
    passes = passes +1;
  }
  else {
    failures = failures + 1;
  }

  student += 1;
}

printf("Passed %d\n", passes );
printf("Failed %d\n", failures );

if (passes > 8){
  printf("Raise tutition\n");
}


return 0;
} /*fine del programma*/
