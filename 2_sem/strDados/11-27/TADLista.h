#ifndef __TADLista__h
#define __TADLista__h
typedef struct elemento TElemento, *PElemento;
typedef struct lista TLista, *PLista;

PLista lista_criar();
void lista_push(PLista l, char *c);
void lista_pop(PLista l);
void lista_pop_all(PLista l, int x);
void lista_limpar(PLista l);
int lista_comprimento(PLista l);
int lista_maiores(PLista l, int x);
int lista_ultimo(PLista l);
void lista_retira_n(PLista l, int x);
void lista_insere(PLista l, int x);
#endif
/*
A partir disso, implemente as seguintes operações para o TAD Lista:

Implemente uma função que tenha como valor de retorno o comprimento de uma lista encadeada, isto é, que calcule o número de nós de uma lista. Essa função deve obedecer ao protótipo:
int comprimento (Lista*l);

Considerando listas encadeadas de valores inteiros, implemente uma função que retorne o número de nós da lista que possuem o campo info com valores maiores do que x. Essa função deve obedecer ao protótipo:
int maiores (PLista l, int x);

Implemente uma função que retorne o último valor de uma lista encadeada de inteiros. Essa função deve obedecer ao protótipo:
int ultimo (PLista l);

Considerando listas de valores inteiros, implemente uma função que receba como parâmetros uma lista encadeada e um valor inteiro x, e retire da lista todas as ocorrências de x. Essa função deve obedecer ao protótipo:
void retira_n (PLista l, int x);

Considerando listas de valores inteiros, implemente uma função que receba como parâmetros uma lista encadeada e um valor inteiro x a ser inserido na lista. Essa função deve obedecer ao protótipo:
void insere (PLista l, int x);

Para a função de inserção SEM o segundo parâmetro, considere inserir o elemento no início da lista.
*/