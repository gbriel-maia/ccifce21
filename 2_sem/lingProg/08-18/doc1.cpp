#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int a, b;

    printf("\nValor de A: ");
    scanf("%d", &a);
    printf("\nValor de B: ");
    scanf("%d", &b);

    printf("\n%d + %d = %d", a, b, a + b);
    printf("\n%d - %d = %d", a, b, a - b);
    printf("\n%d * %d = %.2f", a, b, ((float) a * b));
    printf("\n%d / %d = %.2f", a, b, ((float) a / b));

return 0;
}