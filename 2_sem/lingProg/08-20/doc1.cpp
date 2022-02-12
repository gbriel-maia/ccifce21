//Questao 1
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int a;

    scanf("%d", &a);

    if (a>=0 && a<=255){
        printf("Inteiro = %d\n", a);
        printf("Caractere = %c\n", a);
    }else{
        printf("Valor invalido");
    }

return 0;
}