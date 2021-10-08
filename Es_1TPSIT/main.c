#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define N 10

/*
definisca un tipo di dato Studente. Ogni studente è caratterizzato da un nome, un cognome e una matricola.

Acquisica i dati di 10 studenti e, per ogni nuovo studente inserito, proceda ad un inserimento ordinato (lo scopo dell'esercizio è ordinare
gli studenti durante il processo di inserimento degli stessi e non dopo averli inseriti tutti con un algoritmo di ordinamento).

stampi i dati degli studenti.
*/

typedef struct{
    char nome[MAX];
    char cognome[MAX];
    int matricola;
}Studente;

int main()
{
    Studente classe[N];
    int k;

    for(k = 0; k < N; k++){

    printf("Inserisci il nome dello studente: \n");
    scanf("%s", &classe[k].nome);
    printf("Inserisci il cognome dello studente: \n");
    scanf("%s", &classe[k].cognome);
    printf("Inserisci la matricola dello studente: \n");
    scanf("%d", &classe[k].matricola);

    }

    for(k = 0; k < N; k++){
        printf("nome: %s | cognome: %s | matricola: %d \n", classe[k].nome, classe[k].cognome, classe[k].matricola);
    }

    system("PAUSE");
    return 0;
}
