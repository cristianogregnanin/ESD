/* ex. 4.07 Deitel C how to program */
/* Scrivete delle istruzioni for che visualizzino le seguenti sequenze di valori:
a) 1, 2, 3, 4, 5, 6, 7
b) 3, 8, 13, 18, 23
c) 20, 14, 8, 2, -4, -10
d) 19, 27, 35, 43, 51 */


/*a*/  for (x=1; x <= 7; x ++)
        printf("%d\n", x);

/*b*/ for (x=3; x <= 23; x += 5)
        printf("%d\n", x);

/*c*/ for(x=20; x >= -10; x -= 6)
        printf("%d\n", x);

/*d*/ for (x = 19; x <= 51; x += 8)
        printf("%d\n", x);
