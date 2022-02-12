#include<stdio.h>
#include<locale.h>
#define N 3
void maxIdade(int *v, int *max){
    *max = v[0];
    for (int i = 0; i < N; i++){
        if (v[i] > *max){
            *max = v[i];
        }
    }
}
void minIdade(int *v, int *min){
    *min = v[0];
    for (int i = 0; i < N; i++){
        if (v[i] < *min){
            *min = v[i];
        }
    }
}
void mostrar(int *v, int *max, int *min){
    printf("Maior Idade: %d\nMenor Idade: %d\n", *max, *min);
}
int main(){
    setlocale(LC_ALL, "");
    int notas[N], max, min;

    printf("Digite as idades (uma por vez): ");
    scanf("%d", &notas[N]);

    maxIdade(notas, &max);
    minIdade(notas, &min);
    mostrar(notas, &max, &min);

return 0;
}