#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TADFila.h"
struct fila{
    PElemento base, topo;
    int totalElementos;
};
struct elemento{
    int dado;
    PElemento proximo;
};

PFila fila_criar(){
    PFila f = (TFila *) malloc(sizeof(TFila));
    f->base = NULL;
    f->topo = NULL;
    f->totalElementos = 0;
return f;
}
void fila_mostrar(PFila f){
    if (f->base != NULL){
        PElemento aux = f->base;
        while (aux->proximo != NULL){
            printf("%d, ", aux->dado);
            aux = aux->proximo;
        }
        printf("%d\n", aux->dado);
    }else{
        printf("Fila Vazia\n");
    }
}
void fila_push(PFila f, char *d){
    PElemento e = (TElemento *) malloc(sizeof(TElemento));
    if (f->base == NULL){
        f->base = e;
    }else{
        f->topo->proximo = e;
    }
    f->topo = e;
    f->totalElementos++;
    int aux = atoi(d);
    if (aux != '\0'){
        e->dado = aux;
    }else{
        e->dado = '\0';
    }
    e->proximo = NULL;
}
void fila_pop(PFila f){
    if (f->base == f->topo){
        fila_limpar(f);
    }else{
        PElemento aux = f->base;
        f->totalElementos--;
        aux = aux->proximo;
        free(f->base);
        f->base = aux;
    }
}
void fila_limpar(PFila f){
    if (f->topo != NULL){
        PElemento aux = f->base;
        PElemento nxt;
        while (nxt != NULL){
            nxt = aux->proximo;
            free(aux);
            aux = nxt;
        }
        f->base = NULL;
        f->topo = NULL;
        f->totalElementos = 0;
    }
}