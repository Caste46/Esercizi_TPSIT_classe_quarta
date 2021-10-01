#include <stdio.h>
#include <stdlib.h>
#include "../utility.h"

//Definire una procedura che disegni x asterischi e richiamarla n volte nel main
/*
Castellano Elia 3^AROB
ES_1 funzioniC
*/
void Asterischi() {
    int Nasterischi;
    int x, y;
    int k;

    x = 60;
    y = 15;

    printf("Inserisci il numero di asterischi da stampare: ");
    scanf("%d", &Nasterischi);

    for(k = 0; k < Nasterischi; k++) {
        gotoxy(x, y);
        printf("%c", '*');
        x = x + 1;
    }
    return;
}

int main() {

    Asterischi();

    printf("\n");
    system("PAUSE");
    return 0;
}
