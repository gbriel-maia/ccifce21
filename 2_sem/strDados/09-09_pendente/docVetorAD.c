#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
float * alocVet(int tam){
    float *a;
    a = (float *) malloc (tam * sizeof(float));
return a;
}
void povoar(int tam, float *notas){
    for (int i = 0; i < tam; i++){
        scanf("%f", &notas[i]);
    }
}
void mostrar(int tam, float *notas, float *media){
    printf("{ ");
    for (int i = 0; i < tam; i++){
        if (i != tam-1){
            printf("%.0f, ", notas[i]);
        } else {
            printf("%.0f } => media = %.1f", notas[i], *media);
        }
    }
}
void calcMedia(int tam, float *notas, float *media){
    for (int i = 0; i < tam; i++){
        *media += notas[i];
    }
    *media /= (float) tam;
}
void liberar(int tam, float *notas){
    free(notas);
}
int main(){
    setlocale(LC_ALL, "");
    int x;
    float *z, m = 0;

    scanf("%d", &x);

    z = alocVet(x);
    povoar(x, z);
    calcMedia(x, z, &m);
    mostrar(x, z, &m);

    liberar(x, z);
return 0;
}