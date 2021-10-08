#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void caricaVettore(int v[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("inserire nella cella [%d] =", k);
        scanf("%d", v + k);
    }
    printf("\n");
}

void stampaVettore(int v[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("%d ", *(v + k));
    }
    printf("\n");
}

void bubbleSort(int v[], int n){
    int sup, k, a;

    for(sup = n - 1; sup > 0; sup --){
        for(k = 0; k < sup; k++){
            if(*(v + k) > *(v + k + 1)){
                a = *(v + k + 1);
                *(v + k + 1) = *(v + k);
                *(v + k) = a;
            }
        }
    }
}

int main()
{
    int vett[DIM];

    caricaVettore(vett, DIM);

    printf("Vettore iniziale: ");

    stampaVettore(vett, DIM);

    bubbleSort(vett, DIM);

    printf("Vettore ordinato: ");

    stampaVettore(vett, DIM);

    system("PAUSE");
    return 0;
}
