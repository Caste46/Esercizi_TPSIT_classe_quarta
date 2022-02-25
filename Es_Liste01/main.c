#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int num;
    struct lista* next;
}Lista;

int main()
{
    int n;

    printf("Inserisci il numero di valori: ");
    scanf("%d", &n);

    Lista* head = (Lista*) malloc(n * sizeof(Lista));



    printf("\n");
    system("PAUSE");
    return 0;
}
