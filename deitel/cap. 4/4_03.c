/* ex. 4.03 Deitel C how to program */
/* Scrivete una istruzione o un loro insieme per eseguire ognuno dei seguenti compiti: */


/*a*/ Sommate gli interi dispari tra 1 e 99 utilizzando un comando for. Supponete che siano
      state dichiarate le variabili sum e count.

      for (count = 1; count <= 99; count +=2){
          sum += count;
      }

/*b*/ Visualizzate il valore 333,546372 in un campo lungo 15 caratteri con le precisioni 1,2,3,4 e 5.
      Giustificate a sinistra l'output. Quali saranno i cinque valori visualizzati?

      printf("%-15.1f\n", 333.546372); visualizza 333.5
      printf("%-15.2f\n", 333.546372); visualizza 333.55
      printf("%-15.3f\n", 333.546372); visualizza 333.546
      printf("%-15.4f\n", 333.546372); visualizza 333.55464
      printf("%-15.5f\n", 333.546372); visualizza 333.54637

/*c*/ Calcolate il valore di 2.5 elevato alla potenza di 3 utilizzando la funzione pow. Visualizzate il
      risultato con precisione 2 in un campo con dimensione pari a 10 posizioni. Quale sarà il valore visualizzato?

      printf("%10.2f\n", pow(2.5,3) ); visualizza 15.63

/*d*/ Visualizzate gli interi da 1 a 20 utilizzando un ciclo while e la variabile contatore x. Supponente
      che x sia già stata dichiarata, ma non inizializzata. Visualizzate solo 5 interi per riga.

      x = 1;
      while(x<=20){
        printf("\n");
        if(x%5==0)
          printf("\n");
        else
          printf("\t");

          x++;
      }

  /*e*/ ripetere l'esercizio 4.3(d) utilizzando un ciclo for.

        for (x = 1; x <= 20, x++){
          printf("\n");
          if(x%5==0)
            printf("\n");
          else
            printf("\t");
        }
