/* ex. 4.29 Deitel C how to program */
/* (Leggi di De Morgan) In questo capitolo abbiamo discusso degli operatori logici &&, || e !.
Le Leggi di De Morgan potranno a volte renderci più pratica la formulazione di una espressione logica.
Queste leggi stabiliscono che l'espressione !(condizione1 && condizione2) è logicamente equivalente
alla espressione (!condizione1 || !condizione2). Inoltre, l'espressione !(condizione1 || condizione2)
è logicamente equivalente alla espressione (!condizione1 && !condizione2). Utilizzate le Leggi di
De Morgan per scrivere delle espressioni equivalenti per ognuna di quelle seguenti e quindi Scrivete
un programma che dimostri che l'espressione originale e quella nuova sono, in ogni caso, equivalenti:

a) !(x < 5) && !(y >= 7) è equivalente a !((x<5) || (y >=7))
b) !(a == b) || !(g != 5) è equivalente a !((a == b) && (g != 5))
c) !( (x <= 8) && (y > 4) ) è equivalente a !(x <= 8) || !(y <= 6)
d) !( (i > 4) || ( j <= 6) ) è equivalente a !(i > 6) && !(j <= 6)

*/
