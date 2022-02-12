#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TADPilha.h"
struct pilha{
    PElemento base, topo;
    int totalElementos;
};
struct elemento{
    int dado;
    PElemento proximo;
};

PPilha pilha_criar(){
    PPilha p = (TPilha *) malloc(sizeof(TPilha));
    p->base = NULL;
    p->topo = NULL;
    p->totalElementos = 0;
return p;
}
void pilha_mostrar(PPilha p){
    if (p->topo != NULL){
        PElemento aux = p->base;
        PElemento auxtop = p->topo;
        if (aux->dado != '\0'){
            while (auxtop != p->base){
                printf("%d, ", auxtop->dado);
                while (aux->proximo != auxtop){
                    aux = aux->proximo;
                }
                auxtop = aux;
                aux = p->base;
            }
            printf("%d\n", auxtop->dado);
        }
    }else{
        printf("Pilha Vazia\n");
    }
}
void pilha_push(PPilha p, char *d){
    PElemento e = (TElemento *) malloc(sizeof(TElemento));
    if (p->base == NULL){
        p->base = e;
    }else{
        p->topo->proximo = e;
    }
    p->topo = e;
    p->totalElementos++;
    int aux = atoi(strtok(d, '-i '));
    if (aux != '\0'){
        e->dado = aux;
    }else{
        e->dado = '\0';
    }
    e->proximo = NULL;
}
void pilha_pop(PPilha p){
    if (p->base == p->topo){
        pilha_limpar(p);
    }else{
        PElemento aux = p->base;
        p->totalElementos--;
        while (aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = NULL;
        free(p->topo);
        p->topo = aux;
    }
}
void pilha_limpar(PPilha p){
    if (p->topo != NULL){
        PElemento aux = p->base;
        PElemento nxt;
        do{
            nxt = aux->proximo;
            free(aux);
            aux = nxt;
        } while (nxt != NULL);
        p->base = NULL;
        p->topo = NULL;
        p->totalElementos = 0;
    }
}