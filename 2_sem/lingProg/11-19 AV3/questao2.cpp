#include<stdio.h>
#include<string.h>
#include<locale.h>
#define x 70
int main(){
    setlocale(LC_ALL, "");
    char t1[x];
    char t2[x];
    printf("\n*Compara Texto*\n");
    printf("\nTexto 1:\n");
    scanf("%[^\n]", t1);
    getchar();
    printf("\nTexto 2:\n");
    scanf("%[^\n]", t2);
    getchar();

    int z = 0;
    for (int i = 0; i < strlen(t1); i++){
        if (t1[i] != t2[i]){
            z = 1;
            break;
        }
    }
    if (z == 1){
        printf("\nTextos diferentes\n");
    }else{
        printf("\nTextos Iguais\n");
    }

return 0;
}