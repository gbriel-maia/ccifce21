#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
typedef struct registro{
    char *municipio;
    char *estado;
    int populacao;
} tReg, *PReg;
PReg alocarReg(int n){
    PReg a = NULL;
    a = (PReg) malloc (n * sizeof(tReg));
    if (a != NULL){
        for (int i = 0; i < n; i++){
            a[i].municipio = (char *) malloc (30 * sizeof(char));
            a[i].estado = (char *) malloc (2 * sizeof(char));
        }
    }
return a;
}
void preencher(PReg a, int n){
    for (int i = 0; i < n; i++){
        scanf("%[^\n]s", a[i].municipio);
        getchar();
        scanf("%[^\n]s", a[i].estado);
        getchar();
        scanf("%d", &a[i].populacao);
        getchar();
    }
}
void mostrar(PReg a, int n){
    for (int i = 0; i < n; i++){
        if (a[i].estado == "ce" || a[i].estado == "CE"){
            printf("%s-%s\n", a[i].municipio, a[i].estado);
        }
    }
}
void mostrarmaior(PReg a, int n){
    int b = 0, m;
    for (int i = 0; i < n; i++){
        if (a[i].populacao > b){
            b = a[i].populacao;
            m = i;
        }
    }
    printf("%s-%s = %d\n", a[m].municipio, a[m].estado, a[m].populacao);
}
void liberar(PReg a, int n){
    for (int i = 0; i < n; i++){
        free(a[i].municipio);
        free(a[i].estado);
    }
    free(a);
}
int main(){
    setlocale(LC_ALL, "");
    int n;
    PReg x;

    scanf("%d", &n);
    x = alocarReg(n);
    preencher(x, n);
    mostrar(x, n);
    mostrarmaior(x, n);
    liberar(x, n);
return 0;
}