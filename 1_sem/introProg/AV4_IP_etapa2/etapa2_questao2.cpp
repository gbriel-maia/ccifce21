#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
/* 1 -criar e inicializar variaveis */
    int *zptr = NULL;
    int z[5] = {10, 20, 30, 40, 50};
    int numero, i;

/* 2 -usar o ponteiro para obter o endereço de inicio do vetor*/
    zptr = z;
    printf("\nO endereco inicial do vetor e %x\n", zptr);

/* 3 –com o ponteiro, atribuir o segundo elemento do vetor à variável numero */
    zptr = &z[1];
    numero = *zptr;
    printf("\nA segunda posicao do vetor contem: %d\n", numero);

/* 4 -imprimir todo o vetor usando aritmética de ponteiros */
    zptr = z;
    for (i = 0; i < 5; i++){
        printf("\nz[%d] = {%d}", i, *zptr);
        ++zptr;
    }

return 0;
}