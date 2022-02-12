#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int lin, col, i ,o;

    scanf("%d", &lin);
    scanf("%d", &col);

    int a[lin][col];

    for (i = 0; i < lin; i++){
        for (o = 0; o < col; o++){
            scanf("%d", &a[i][o]);
        }
    }

    for (i = 0; i < lin; i++){
        for (o = 0; o < col; o++){
            if (a[i][o] < 10){
                printf("0%d ", a[i][o]);
            }else{
                printf("%d ", a[i][o]);
            }
        }
        printf("\n");
    }

return 0;
}