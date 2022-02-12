#include<stdio.h>
#include<locale.h>
int s = 0, p = 1;
int soma(int a){
    if (a > 0){
        s = a + soma(a-1);
    }
return s;
}
int prod(int a){
    if (a > 0){
        p = a * prod(a-1);
    }
return p;
}
int main(){
    setlocale(LC_ALL, "");
    int n = 0;

    scanf("%d", &n);

    printf("soma: %d\nproduto: %d\n", soma(n), prod(n));

return 0;
}