#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    float s = 0;
    float imp;

    scanf("%f");

    if (s != 0){
        imp = s * 10 / 100;
        printf("Valor pago por mulheres: R$%f", imp);
        imp = s * 15 / 100;
        printf("Valor pago por homens: R$%f", imp);
    }

return 0;
}