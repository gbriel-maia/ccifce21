#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    char a[50];
    char x;
    int n = 0;

    printf("\n*Conta Caractere*\n");
    printf("Digite uma frase:\n");
    scanf ("%[^\n]", a);
    getchar();
    printf("\nDigite qual caractere quer contar: ");
    scanf("%c", &x);

    for (int i = 0; i < 50; i++){
        if (a[i] == x){
            n++;
        }
    }
    if (n == 0){
        printf("\nO caractere \"%c\" nao estava na frase", x);
    }else{
        printf("\nO caractere \"%c\" apareceu %d vezes", x, n);
    }

return 0;
}