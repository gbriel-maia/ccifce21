#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int ano;

    scanf("%d", &ano);

    if (ano % 4 == 0 || ano == 0){
        printf("*Ano Bissexto\n");
    } else {
        printf("*Ano Normal\n");
    }

return 0;
}