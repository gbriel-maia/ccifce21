#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    const int T = 7;
    int m[T][T];
    for (int i = 0; i < T; i++){
        for (int j = 0; j < T; j++){
            m[i][j] = 0;
            if (i < j && i + j < T-1){
               m[i][j] = 1;
            }

            if (i < j && i + j >= T){
                m[i][j] = 2;
            }

            if (i > j && i + j >= T){
                m[i][j] = 3;
            }

            if (i > j && i + j < T-1){
                m[i][j] = 4;
            }

            if (i == j || (i + j) == (T - 1)){
                m[i][j] = 0;
            }
        }
    }

    printf("*Matriz %dx%d*\n", T, T);
    for (int i = 0; i < T; i++){
        for (int j = 0; j < T; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

return 0;
}
