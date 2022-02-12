#ifndef __novotipo__h
#define __novotipo__h
typedef struct novoTipo nTipo, *PnTipo;
PnTipo criar_nTipo();
void mostrar_nTipo(PnTipo n);
void modificar_nTipo(PnTipo n);
void destruir_nTipo(PnTipo n);
//a implementacao das funcoes occore no arquivo novotipo.c
#endif