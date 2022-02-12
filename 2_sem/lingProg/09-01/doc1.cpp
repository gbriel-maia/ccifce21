//Questao 1
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    char l;

    l = getchar();

    switch (l){
        case 's':
            printf("Solteiro");
            break;
        
        case 'n':
            printf("Namorando");
            break;
        
        case 'c':
            printf("Casado");
            break;
        
        case 'd':
            printf("Divorciado");
            break;
        
        case 'v':
            printf("Viuvo");
            break;
        
        default:
            printf("Opcao invalida");
            break;
    }

return 0;
}