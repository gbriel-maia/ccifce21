#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void media(int *x, int *y, int *z){
    for (int i = 0; i < *y; i++){
        *z += x[i];
    }
    *z /= *y;
    printf("Media: %d", *z);
}
int main(){
    setlocale(LC_ALL, "");
    int q, *v, m = 0;

    printf("Quantidade de idades: ");
    scanf("%d", &q);
    v = (int *) malloc(q*sizeof(int));

    for (int i = 0; i < q; i++){
        printf("Idade [%d]: ", i+1);
        scanf("%d", &v[i]);
    }

    media(v, &q, &m);

    free(v);

return 0;
}