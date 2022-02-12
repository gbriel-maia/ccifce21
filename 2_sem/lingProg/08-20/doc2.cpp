//Questao 2
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int k = 60;
    int seg;
    int min = 0;
    int hor = 0;

    scanf("%d", &seg);

    if (seg >= 0){
        if (seg >= k){
            min = seg / k;
            seg %= k;
        }
        if (min >= k){
            hor = min / k;
            min %= k;
        }
        printf("%d : %d : %d", hor, min, seg);
    }else{
        printf("Valor invalido");
    }

return 0;
}
