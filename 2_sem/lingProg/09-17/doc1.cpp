#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int a = 1, b = 50;
    for (a; a < b; a++){
        if (a % 2 == 0){
            printf("%d\t", a);
        }
    }

return 0;
}