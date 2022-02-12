#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int a, b, i = 10;
    scanf("%d", &a);
    if (a > 1 && a <=10 ){
        for (b = 1; b < i; b++){
            printf("%d + %d = %d\t", a, b, (a + b)); //adicao
            printf("%d - %d = %d\t", a, b, (a - b)); //subtracao
            printf("%d * %d = %d\t", a, b, (a * b)); //multiplicacao
            printf("%d / %d = %.2f\t", a, b, ((float) a / b)); //divisao
            printf("\n");
        }
    }

return 0;
}