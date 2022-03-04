#include <stdio.h>
#include <stdlib.h>
#define DIM 20

typedef struct {
    char nome[256];
    char cognome[256] ;
    int matricola;
    int pressione[2];
    int temperature[3];
    float parcella;
} Paziente;

void addPaziente(Paziente v[], int k) {
    if(k< DIM) {
        printf("Dammi il nome: ");
        scanf("%s", v[k].nome);
        printf("Dammi il cognome: ");
        scanf("%s", v[k].cognome);
        printf("Dammi la matricola: ");
        scanf("%d", &v[k].matricola);
        printf("Dammi le pressioni(2): ");
        scanf("%d %d", &v[k].pressione[0],&v[k].pressione[1]);
        printf("Dammi le temperature(3): ");
        scanf("%d %d %d", &v[k].temperature[0],&v[k].temperature[1],&v[k].temperature[2]);
        printf("Dammi la parcella: ");
        scanf("%f", &v[k].parcella);
    } else {
        printf("Non ci sono posti disponibili nella clinica\n");
    }
}

float getSomma(Paziente v[], int n) {
    float somma=0;
    for(int k=0; k< n; k++) {
        somma+=v[k].parcella;
    }
}

int main() {
    Paziente rossi;
    Paziente clinica[DIM];
    int nPazienti=0;
    addPaziente(clinica, nPazienti);
    nPazienti++;
    printf("Saldo totale: %.2f", getSomma(clinica, nPazienti));

    return 0;
}
