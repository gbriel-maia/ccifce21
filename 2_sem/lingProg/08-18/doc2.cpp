#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    float a;

    printf("\nValor Real: ");
    scanf("%f", &a);

    printf("\nParte Inteira: %d", (int) a);
    printf("\nParte Fracionaria: %.2f", a - (int) a);
return 0;
}