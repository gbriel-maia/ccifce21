#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include "TADPilha.c"
void menu(PPilha p){
    char c[10];
    int i = 0;
    while (i == 0){
        scanf("%[^\n]", c);
        getchar();
        if (c[0] == '-'){
            switch (c[1]){
            case 's':
                pilha_mostrar(p);
                pilha_limpar(p);
                free(p);
                i = 1;
                break;
            
            case 'i':
                if (c[2] == ' '){
                    pilha_push(p, c);
                }else{
                    printf("Comando Invalido\n");
                }
                break;
            
            case 'r':
                pilha_pop(p);
                break;
            
            case 'c':
                pilha_limpar(p);
                break;
            
            default:
                printf("Comando Invalido\n");
                break;
            
            }
        }else{
            printf("Comando Invalido\n");
        }
    }
}
int main(){
    setlocale(LC_ALL, "");
    PPilha x;
    x = pilha_criar();
    menu(x);

return 0;
}