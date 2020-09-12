/* ex. 4.03 Deitel C how to program */
/* Trovate l'errore in ognuno dei seguenti istruzioni */


/*a*/  for (x=1; x <= 100; x++)
        printf("%d\n", x);

/*b*/ switch (value % 2){
      case 0:
        printf("Even integer\n");
        break;
      case 1:
        printf("Odd integer\n");
}

/*c*/ scanf("%d", &intVal);
      scanf("\n%c", &charVal );
      printf("Integer: %d\nCharacter: %c\n", intVal, charVal );

/*d*/ for (x = 1; x <= 100; x++)
        printf("%.7f\n", (float) x/100 );
