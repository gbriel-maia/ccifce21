#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
    setlocale(LC_ALL, "");
    char a[50];
    char x;
    int n = 0;

    printf("\n*P/ Maiusculo*\n");
    printf("Digite uma frase:\n");
    scanf ("%[^\n]", a);
    getchar();

    for (int i = 0; i < 50; i++){
        a[i] = toupper(a[i]);
    }
    printf("%s\n", a);

return 0;
}