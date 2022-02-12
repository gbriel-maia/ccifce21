//Questao 3
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "");
    float raio;
    double area;
    double per;

    scanf("%f", &raio);

    if (raio > 0){
        area = M_PI * pow(raio, 2);
        per = 2 * M_PI * raio;

        printf("Area: %.2f\n", area);
        printf("Perimetro: %.2f\n", per);
    }else{
        printf("Valor invalido");
    }

return 0;
}