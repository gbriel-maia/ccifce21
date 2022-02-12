#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    const int T = 10;
    int a[T];
    int x;
    int z = 0;

    printf("*Salva numero*\n");
    for(int i = 0; i < T; i++){
        printf("Posicao [%d]: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n*Encontra numero*");
    printf("\nDigite qual numero quer encontrar: ");
    scanf("%d", &x);
    for (int i = 0; i < T; i++){
        if (a[i] == x){
            printf("\nO numero %d esta na posicao [%d]", x, i+1);
            z = 1;
        }
    }
    if (z == 0){
            printf("\nNumero nao encontrado");
    }

return 0;
}