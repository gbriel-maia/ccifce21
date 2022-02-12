#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "");
    int n , s = 0;

    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        s += pow(i, 2);
    }

    printf("%d\n", s);

return 0;
}