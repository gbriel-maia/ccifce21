#include<stdio.h>
#include<locale.h>
int data(int *dat){
    if (dat[2] < 0){
        dat[2] *= -1;
        printf("%d/%d/%d a.C.\n", dat[0], dat[1], dat[2]);
    } else {
        printf("%d/%d/%d\n", dat[0], dat[1], dat[2]);
    }
    return 0;
}
int main(){
    setlocale(LC_ALL, "");
    int dat[3];
    dat[0] = 0;
    dat[1] = 0;
    dat[2] = 0;

    for (int i = 0; i < 3; i++){
        scanf("%d", &dat[i]);
    }

    if (dat[0] > 0 && dat[0] <= 31){
        if (dat[1] == 1 || dat[1] == 3 || dat[1] == 5 || dat[1] == 7 || dat[1] == 8 || dat[1] == 10 || dat[1] == 12){
            data(dat);
        } else if (dat[0] <= 30 && dat[1] == 4 || dat[1] == 6 || dat[1] == 9 || dat[1] == 11){
            data(dat);
        } else if (dat[1] == 2 && dat[0] <= 29){
            if (dat[2] % 4 == 0 || dat[2] == 0){
                data(dat);
                printf("*Ano Bissexto\n");
            } else if (dat[0] <= 28){
                data(dat);
            }
        } else {
            printf("Valor Mes Invalido\n");
        }
    } else {
        printf("Valor Dia Invalido\n");
    }
return 0;
}