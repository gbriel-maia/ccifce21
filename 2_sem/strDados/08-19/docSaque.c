#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int d;
    int cem =  0;
    int cinq =  0;
    int vint =  0;
    int dez =  0;
    int cinc =  0;
    int dois =  0;
    int um =  0;

    scanf("%d", &d);

    if (d != 0){
        if (d >= 100){
            cem = d / 100;
            d %= 100;
        }
        if (d >= 50){
            cinq = 1;   //cinq = d / 50;   Só há uma possibilidade
            d %= 50;
        }
        if (d >= 20){
            vint = d / 20;
            d %= 20;
        }
        if (d >= 10){
            dez = d / 10;
            d %= 10;
        }
        if (d >= 5){
            cinc = 1;   //cinc = d / 5;   Só há uma possibilidade
            d %= 5;
        }
        if (d >= 2){
            dois = d / 2;
            d %= 2;
        }
        if (d == 1){   //Se o codigo chegar até aqui d so pode ser 1 a essa altura
            um = 1;    //um = d / 1;   Novamente só há uma possibilidade
        }
        printf("%d\n", cem);
        printf("%d\n", cinq);
        printf("%d\n", vint);
        printf("%d\n", dez);
        printf("%d\n", cinc);
        printf("%d\n", dois);
        printf("%d\n", um);
    }else{
        printf("\nValor invalido");
    }
return 0;
}