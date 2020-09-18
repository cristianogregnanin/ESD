/* ex. 4.28 Deitel C how to program */
/* Una azienda retribuisce i propri dipendenti distinguendoli tra manager (che ricevono un salario
fisso settimanale), lavoratori a ore (che ricevono una paga oraria fissa per le prime 40 ore di lavoratori
e "un'ora e mezza", ovverosia 1.5 volte la paga oraria, per le ore di straordinario effettuate), lavoratori a
provvigione (che ricevono $250 più il 5.7% delle loro vendite lorde settimanali), oppure lavoratori a
cottimo (che ricevono una cifra fissa di denaro ad articolo, per ognuno di quelli prodotti: in questa
azienda ogni lavoratore a cottimo lavora soltanto su un tipo di articolo). Scrivete un programma tecniche
calcoli la paga settimanale di ogni dipendente. Non conoscete in anticipo il numero dei dipendenti.
Ogni tipo di dipendente ha il proprio codice di pagamento: i manager hanno 1, i lavoratori a ore hanno 2,
quelli a provvigione hanno 3 e quelli a cottimo hanno 4. Utillaze un comando switch per calcolare la pagamento.
All'interno del comando switch, richiedete all'utente (ovverosia all'impiegato addetto alle paghe) di
immettere i fatti appropriati di cui il vostro programma avrà bisogno per calcolare la paga di ogni dipendente,
in base al proprio cosice di pagamento. */

#include <stdio.h>

int main(){

int codice, ore;
int parziale, articoli;
float mSalario, oSalario, vLorde, cFissa;

printf("inserisci il codice dipendente: ");
scanf("%d", &codice );

while (codice != -1){

  switch(codice){
    case 1:
      printf("selezione manager\n");
      printf("inserisci la paga settimanale: ");
      scanf("%f", &mSalario );

      printf("il salario è %.2f\n", mSalario);
      break;

    case 2:
      printf("selezione lavoratore a ore\n");
      printf("inserisci la paga oraria: ");
      scanf("%f", &oSalario );
      printf("inserisci le ore lavorate: ");
      scanf("%d", &ore);

      parziale = ore - 40;

      if (ore <=  40)
        printf("il salario è: %.2f\n",oSalario*ore);
      else
        printf("il salario è: %.2f\n", (40 * oSalario) + (parziale * (oSalario*1.5)));

      break;

    case 3:
      printf("selezione a provviggione\n");
      printf("inserisci il le vendite lorde settimanali: ");
      scanf("%f", &vLorde);

      printf("il salario è: %.2f\n", (250 + (vLorde * 5.7)/100));
      break;

    case 4:
      printf("selezione lavoratori a cottimo\n");
      printf("inserisci la quantità di articoli lavorati: ");
      scanf("%d", &articoli );
      printf("inserisci il compenso ad articolo: ");
      scanf("%f", &cFissa);

      printf("il salario è %.2f\n", cFissa * articoli);
      break;

    default:
      printf("il codice inserito è sbagliato\n");

  }

  printf("inserisci il codice dipendente: ");
  scanf("%d", &codice );

}

  return 0;
}
