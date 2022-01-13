#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int num;
    struct nodo * next;
}Nodo;

Nodo * formattaLista(){
    int n;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);
    Nodo* head;
    if(n> 0)
    {
        head=(Nodo*)malloc(sizeof(Nodo));
    }
    else
    {
        head=NULL;
    }
    Nodo * r=head;
    Nodo * c;
    for(int k=0; k< n; k++)
    {
        printf("Dammi il %d valore: ", k+1);
        scanf("%d", &r->num);
        c=NULL;
        if(k<n-1)
        {
            c= (Nodo*)malloc(sizeof(Nodo));
        }
        r->next=c;
        r=c;
    }
    return head;
}

void stampaLista(Nodo * l){
    if(l!=NULL)
    {
        printf("%d\n", l->num);
        stampaLista(l->next);
    }
}

void stampaListaModificata(Nodo * l){
    Nodo * head=l;
    while(l!=NULL)
    {
        if(l->num % 2 ==0)printf("%d\n", l->num);
        l=l-> next;
    }
    l=head;
    while(l!=NULL)
    {
        if(l->num % 2 !=0)printf("%d\n", l->num);
        l=l-> next;
    }

}

int main(){
    Nodo * head= formattaLista();
    printf("Stampa di base: \n");
    stampaLista(head);
    printf("Stampa modificata: \n");
    stampaListaModificata(head);
    return 0;
}
