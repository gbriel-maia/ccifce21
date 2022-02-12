#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "");
    typedef struct{
        int x;
        int y;
    }ponto;

    const int N = 2;
    ponto coord[N];

    for (int i = 0; i < N; i++){
        printf("\n--Coordenada %d--", i+1);
        printf("\nPosicao em x: ");
        scanf("%d", &coord[i].x);
        printf("\nPosicao em y: ");
        scanf("%d", &coord[i].y);
        printf("\nPar ordenado(%d,%d)", coord[i].x, coord[i].y);
        printf("\n");
    }

    float dif = sqrt(pow((coord[1].x - coord[0].x),2) + pow((coord[1].y - coord[0].y),2));
    printf("\nDistancia entre os pontos: %.2f", dif);
return 0;
}