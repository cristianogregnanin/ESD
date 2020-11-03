/* ex. 5.07 Deitel C how to program */
/* Trovate l'errore in ognuno dei seguenti segmenti di programma e spiegate come potrà essere
   corretto:

a) int g (void){

  printf("Inside function g\n");
}
  int h (void) {
    printf("Inside function h\n");
 }

b) int sum (int x, int y){

return x + y;
}

c) int sum (int n){

if (n == 0)
  return 0;
else
  return n + sum(n - 1);
}

d) void f(float a){

printf("%f", a );
}

e) void product (void)
{
int a, b, c, result;
printf("Enter three integers: ");
scanf("%d%d%d", &a, &b, &c );
result = a*b*c;
printf("Result is %d", result );
}
*/
