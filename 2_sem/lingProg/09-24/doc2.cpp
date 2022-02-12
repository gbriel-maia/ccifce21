#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int x = 2;
    printf("Digite 1 ou 0\n");
    while (x != 0 && x != 1){
        scanf("%d", &x);
        if (x != 0 && x != 1){
            printf("Tente novamente\n");
        }
    }

return 0;
}