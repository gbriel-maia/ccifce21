#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
void maximoMinimo(int *v, int N, int *maximo, int *minimo){
    *maximo = v[0];
    *minimo = v[0];
    for (int i = 0; i < N; i++){
        if (v[i] > *maximo){
            *maximo = v[i];
        }
        if (v[i] < *minimo){
            *minimo = v[i];
        }
    }
    printf("\nMaximo: %d\nMinimo: %d\n", *maximo, *minimo);
}
int main(){
    setlocale(LC_ALL, "");
    int *v, q, max, min;
    
    printf("Quantidade de elementos: ");
    scanf("%d", &q);
    v = (int *) malloc(q*sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < q; i++){
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }

    maximoMinimo(v, q, &max, &min);

    free(v);

return 0;
}