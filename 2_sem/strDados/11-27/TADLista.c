#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TADLista.h"
struct lista{
    PElemento base, topo;
    int totalElementos;
};
struct elemento{
    char *dado;
    PElemento proximo;
};

PLista lista_criar(){
    PLista l = (TLista *) malloc(sizeof(TLista));
    l->base = NULL;
    l->topo = NULL;
    l->totalElementos = 0;
return l;
}
void lista_mostrar(PLista l){
    if (l->base != NULL){
        PElemento aux = l->base;
        while (aux->proximo != NULL){
            printf("%s, ", aux->dado);
            aux = aux->proximo;
        }
        printf("%s\n", aux->dado);
    }else{
        printf("Lista Vazia\n");
    }
}
void lista_push(PLista l, char *d){
    PElemento e = (TElemento *) malloc(sizeof(TElemento));
    if (l->base == NULL){
        l->base = e;
    }else{
        l->topo->proximo = e;
    }
    l->topo = e;
    l->totalElementos++;
    e->dado = (char *) malloc(sizeof(d));
    strcpy(e->dado, strtok(d, "-i "));
    e->proximo = NULL;
}
void lista_pop(PLista l){
    PElemento aux = l->base;
    l->totalElementos--;
    aux = aux->proximo;
    free(l->base);
    l->base = aux;
}
void lista_limpar(PLista l){
    if (l->topo != NULL){
        PElemento aux = l->base;
        PElemento nxt;
        while (nxt != NULL){
            nxt = aux->proximo;
            free(aux);
            aux = nxt;
        }
        l->base = NULL;
        l->topo = NULL;
        l->totalElementos = 0;
    }
}