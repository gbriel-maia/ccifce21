#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
char * alocVCHAR(int *z){   //uma funcao pra uma linha ¯\_(ツ)_/¯
    return (char *) malloc (*z * sizeof(char));
}
int * alocVINT(int *z){   // ¯\_(ツ)_/¯
    return (int *) malloc (*z * sizeof(int));
}
void povoar(char *x, int *y, int *z){
    char abc = 'A';
    for (int i = 0; i < *z; i++){
        x[i] = abc;
        scanf("%d", &y[i]);
        abc++;
    }
}
void mostrar(char *x, int *y, int *z){
    for (int i = 0; i < *z; i++){
        printf("%c %d ", x[i], y[i]);
        for (int o = 0; o < y[i]; o++){
            printf("*");
        }
        printf("\n");
    }
}
void liberar(char *x, int *y){
    free(x);
    free(y);
}
int main(){
    setlocale(LC_ALL, "");
    int n = 0, *vVa;
    char *vEl;

    scanf("%d", &n);

    vEl = alocVCHAR(&n);
    vVa = alocVINT(&n);
    povoar(vEl, vVa, &n);
    mostrar(vEl, vVa, &n);
    liberar(vEl, vVa);

return 0;
}