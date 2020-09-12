/* ex_2.30 deitel*/

/* Scrivete un programma che prenda in input un numero di cinque cifre, lo spezzetti nelle sue
   singole cifre e le visualizzi ognuna separata dall'altra da tre spazi */

int main ()
{

int numero;

numero = 32156;

/*printf("scrivi un numero di cinque cifre: ");
scanf("%d", numero);*/

printf("%d\t", numero / 10000);
numero %= 10000;

printf("%d\t", numero / 1000);
numero %= 1000;

printf("%d\t", numero / 100);
numero %= 100;

printf("%d\t", numero / 10);
numero %= 10;

printf("%d\t", numero);


  return 0;
}
