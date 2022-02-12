#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include "TADFila.h"
void menu(PFila f){
    char c[10];
    int i = 0;
    while (i == 0){
        scanf("%[^\n]", c);
        getchar();
        if (c[0] == '-'){
            switch (c[1]){
            case 's':
                fila_mostrar(f);
                fila_limpar(f);
                free(f);
                i = 1;
                break;
            
            case 'i':
                if (c[2] == ' '){
                    fila_push(f, c);
                }else{
                    printf("Comando Invalido\n");
                }
                break;
            
            case 'r':
                fila_pop(f);
                break;
            
            case 'c':
                fila_limpar(f);
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
    PFila x;
    x = fila_criar();
    menu(x);

return 0;
}