#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
//Programa 1
    int i = 99, j;/*declaracao das variaveis i com valor 99 e j vazio*/
    int *p;/*declaracao do ponteiro p vazio*/
    p = &i;/*atribuicao do valor armazenado em i, logo p aponta para 99*/
    j = *p + 100;/*atribuicao do valor apontado por p, 99 que depois soma-se a 100 e j recebe 199*/

//Programa 2
    int y, *p, x;/*declaracao das variaveis y, x e do ponteiro p, todos vazios*/
    y = 0;/*atribuicao de 0 para y*/
    p = &y;/*atribuicao do valor armazenado em y, logo p aponta para 0*/

return 0;
}