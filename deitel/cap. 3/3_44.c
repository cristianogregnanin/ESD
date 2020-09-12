/* ex_3.44 deitel*/

/* Scrivete un programma che legga in input tre valori di tipo float diversi da zero e, quindi,
determini e visualizzi se possono rappresentare i lati di un triangolo */

  #include <stdio.h>


  int main()
  {

  float lato1, lato2, lato3;

  lato1 = 1.3;
  lato2 = 1.2;
  lato3 = 9s.3;

  if (lato1 < (lato2 + lato3))
    if (lato2 < (lato1 + lato3))
      if (lato3 < (lato2 + lato1))
        printf("è un triangolo");
      else
        printf("non è un triangolo");
    else
      printf("non è un triangolo");
  else
    printf("non è un triangolo");

     return 0;
  }


return 0;
} /*fine del programma*/
