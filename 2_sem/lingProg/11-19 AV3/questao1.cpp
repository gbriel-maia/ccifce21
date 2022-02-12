#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int x;
    printf("\n*Calcula Media*\n");
    printf("\nDigite quantas notas quer calcular: ");
    scanf("%d", &x);

    if (x <= 0 || x > 10){
        printf("\nA quantidade %d nao aceita", x);
    }else{ 
        float n[x];
        float media = 0;
        for (int i = 0; i < x; i++){
            printf("\nNota %d: ", i+1);
            scanf("%f", &n[x]);
            media += n[x];
        }
        media /= x;
        printf("\nMedia: %.2f", media);
    }
return 0;
}