#include<stdio.h>
#include<locale.h>
#include "TADLista.c"
void menu(PLista l){
    char c[20];
    int n;
    int i = 0;
    while (i == 0){
        scanf("%[^\n]", c);
        getchar();
        if (c[0] == '-'){
            switch (c[1]){
            case 's':
                lista_mostrar(l);
                lista_limpar(l);
                free(l);
                i = 1;
                break;
            
            case 'a':
            if (c[2] == ' '){
                if (strstr(c, " posicao ") != NULL){
                    insere(l, n);
                }else{
                    lista_push(l, c);
                }
            }else{
                printf("Comando Invalido\n");
            }
            break;
            
            case 'r':
                lista_pop_all(l, n);
                break;
            
            case 'c':
                lista_limpar(l);
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
/*
-s : exibe a lista inteira V
-c : esvaziar toda a lista V
-a : inserir um novo elemento na lista com o valor especificado V
-a x posicao y: inserir um novo elemento na lista em uma posição especificada pelo parâmetro “posicao"
-r : remover todas as ocorrências de um elemento especificado da lista
-m : exibe o maior valor da lista
-sl : exibe o último elemento da lista
-sf : exibe o primeiro elemento da lista
-ss : exibe o tamanho da lista
-sg : exibe a quantidade de elementos da lista são maiores que o valor especificado
*/
int text_int(char *c, int *z){
    switch (c[1]){
        
        
        default:
            break;
    }
    z = atoi(strtok(c, " "));
}
int main(){
    setlocale(LC_ALL, "");
    PLista x;
    x = lista_criar();
    menu(x);

return 0;
}