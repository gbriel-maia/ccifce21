#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int x = 0, z = 1;
    while (z != 0){
        scanf("%d", &z);
        x += z;
    }
    printf("%d\n", x);

return 0;
}