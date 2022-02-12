#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    int count = 10, a[count], me;

    for (int i = 0; i < count; i++){
        scanf("%d", &a[i]);
    }

    me = a[0];
    for (int i = 0; i < count; i++){
/*        if (i == 0) {
            me = a[i];
        }*/
        if (a[i] > me) {
            me = a[i];
        }
    }

    printf("%d\n", me);

return 0;
}