#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include "HeapSort.c"
#include<chrono>
#define n 50
int main(){
    setlocale(LC_ALL, "");

    auto begin = std::chrono::high_resolution_clock::now();

    int *vet = (int *) malloc(n*sizeof(int));

    preencher_vetor(vet, n);

    heapsort(vet, n);

    //mostrar_vetor(vet, n);

    free(vet);

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    printf("%.6f milisegs.\n", elapsed.count());

return 0;
}