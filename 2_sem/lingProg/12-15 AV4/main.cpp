#include<stdio.h>
#include<locale.h>
#define lim 8
#define p1 2.0
#define p2 4.0
#define LimparBuffer while(getchar()!='\n');
struct aluno{
    int mat;
    char n[30];
    float n1, n2, m;
};
int main(){
    setlocale(LC_ALL, "");
    struct aluno a[lim];
    for (int i = 0; i < lim; i++){
        printf("* Aluno %d *", i+1);
        printf("\nMatricula: ");
        scanf("%d", &a[i].mat);
        LimparBuffer;
        printf("\nNome: ");
        scanf("%[^\n]", &a[i].n);
        LimparBuffer;
        printf("\nNota 1: ");
        scanf("%f", &a[i].n1);
        LimparBuffer;
        printf("\nNota 2: ");
        scanf("%f", &a[i].n2);
        LimparBuffer;
        printf("\n");
        a[i].m = ((a[i].n1 * p1) + (a[i].n2 * p2)) / (p1 + p2);
    }
    printf("=======//=======\n");
    for (int i = 0; i < lim; i++){
        printf("\n* Aluno %d *\n", i+1);
        printf("Matricula: %d\n", a[i].mat);
        printf("Nome: %s\n", a[i].n);
        printf("Nota 1: %.2f\n", a[i].n1);
        printf("Nota 2: %.2f\n", a[i].n2);
        printf("Media: %.2f\n", a[i].m);
    }

return 0;
}