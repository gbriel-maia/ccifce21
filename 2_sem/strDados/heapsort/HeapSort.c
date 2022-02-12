#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "HeapSort.h"
void mostrar_vetor(int *v, int l){
    for (int i = 0; i < l-1; ++i){
        printf("%d, ", v[i]);
    }
    printf("%d\n", v[l-1]);
}
void preencher_vetor(int *v, int l){
    srand(time(NULL));
    for (int i = 0; i < l; i++){
        v[i] = rand() % (10 * l); // valores aleatorios
        //v[i] = l - i; // valores decrescentes
    }
}
void heap_criar(int *v, int i, int l){
    int p = v[i]; // backup pai
    int f = 2 * i + 1; // formula para o primeiro filho (da esquerda)
    while (f <= l){ // v[f] existe no vetor?
        if (f < l){ // se não está no limite do vetor?
            if (v[f] < v[f + 1]){ // qual dos filhos é maior?
                f++;
            }
        }
        if (p < v[f]){ // pai é menor q filho (maior)?
            v[i] = v[f]; // filho maior toma lugar do pai
            i = f;
            f = 2 * i + 1; // f recebe o indice do filho_esq__filho do filho / neto do pai_antigo
        }else{
            f = l + 1;// f excede o limite do vetor
        }
    }
    v[i] = p; // pai antigo muda de lugar do filho antigo
}
void heapsort(int *v, int l){
    //printf("Parte 1\n");
    for (int i = (l - 1) / 2; i >= 0; i--){ // analisa a primeira metade do vetor, em ordem decrescente
        heap_criar(v, i, l);
        //mostrar_vetor(v, l);
    }
    //printf("Parte 2\n");
    for (int i = l - 1; i >= 0; i--){ // pega o elemento maior v[0] e o coloca no final do vetor v[i]
        int aux = v[0]; // backup do maior valor
        v[0] = v[i];
        v[i] = aux; // final recebe valor maior
        heap_criar(v, 0, i-1); // reria o heap desconsiderando as ultimas posicoes
        //mostrar_vetor(v, l);
    }
}