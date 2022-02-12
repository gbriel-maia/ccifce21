#include<stdio.h>
#include<locale.h>
#define b 6
int main(){
    setlocale(LC_ALL, "");
    int a[b], i, k = 1, o = b-1;

    for (i = 0; i < b; i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 3; i++){
        if (a[i] != a[o]){
            k = 0;
            break;
        }
        o--;
    }

    printf("o=>[%d,%d,%d,%d,%d,%d]\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("i=>[%d,%d,%d,%d,%d,%d]\n", a[5], a[4], a[3], a[2], a[1], a[0]);
    if (k == 1){
        printf("palindromo");
    }else{
        printf("nao palindromo");
    }

return 0;
}