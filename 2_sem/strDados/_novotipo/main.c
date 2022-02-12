#include<stdio.h>
#include<locale.h>
#include "novotipo.h"
int main(){
    setlocale(LC_ALL, "");
    /*int x, *p1, **p2;
    x = 5;
    p1 = &x;
    p2 = &p1;
    printf("%d\n", p2);
    printf("%d\n", *p2);
    printf("%d\n", **p2);
    printf("%d\n", &x);*/

    PnTipo n;
    n = criar_nTipo();
    void mostrar_nTipo(PnTipo n);
    void modificar_nTipo(PnTipo n);
    void destruir_nTipo(PnTipo n);

return 0;
}