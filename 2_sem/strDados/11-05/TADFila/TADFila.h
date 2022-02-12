#ifndef __TADFila__h
#define __TADFila__h
typedef struct elemento TElemento, *PElemento;
typedef struct fila TFila, *PFila;

PFila fila_criar();
void fila_mostrar(PFila p);
void fila_push(PFila p, char *c);
void fila_pop(PFila p);
void fila_limpar(PFila p);
#endif