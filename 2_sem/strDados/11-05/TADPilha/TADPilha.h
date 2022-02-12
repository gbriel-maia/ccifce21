#ifndef __TADPilha__h
#define __TADPilha__h
typedef struct elemento TElemento, *PElemento;
typedef struct pilha TPilha, *PPilha;

PPilha pilha_criar();
void pilha_mostrar(PPilha p);
void pilha_push(PPilha p, char *c);
void pilha_pop(PPilha p);
void pilha_limpar(PPilha p);
#endif