#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
    #include<time.h>
float ** alocMat(int linha, int coluna){
    float **a;
    a = (float **) malloc (linha * sizeof(float));
    for (int i = 0; i < linha; i++){
        a[i] = (float *) malloc (coluna * sizeof(float));
    }
return a;
}
void povoar(int linha, int coluna, float **mat){
    for (int i = 0; i < linha; i++){
        for (int o = 0; o < coluna; o++){
            scanf("%f", &mat[i][o]);
        }
    }
}
    void povoarA(int linha, int coluna, float **mat){
        srand(time(NULL));
        for (int i = 0; i < linha; i++){
            for (int o = 0; o < coluna; o++){
                mat[i][o] = rand() % 100 /** 1.0*/;
            }
        }
    }
void mostrar(int linha, int coluna, float **mat){
    for (int i = 0; i < linha; i++){
        for (int o = 0; o < coluna; o++){
            printf("%.1f ", mat[i][o]);
        }
        printf("\n");
    }
}
void determinante(int linha, int coluna, float **mat){
    float det;
    if (linha == 1 && coluna == 1){
        det = mat[linha][coluna];
    } else if (linha == 2 && coluna == 2){
    } else if (linha == 3 && coluna == 3){
    } else {
    }
    
    printf("Determinante = %.2f ", det);
}
void calcEscalar(int linha, int coluna, float **mat, float nEscalar){
    for (int i = 0; i < linha; i++){
        for (int o = 0; o < coluna; o++){
            mat[i][o] *= nEscalar;
        }
    }
}
void liberar(int linha, int coluna, float **mat){
    for (int i = 0; i < linha; i++){
        free(mat[i]);
    }
    free(mat);
    printf("** free **\n");
}
int main(){
    setlocale(LC_ALL, "");
    int x = 3 , y = 3;
    float **z, e;

    //scanf("%d", &x);
    //scanf("%d", &y);
    //scanf("%f", &e); // numero escalar

    z = alocMat(x, y);
    povoarA(x, y, z);
    mostrar(x, y, z);
    //calcEscalar(x, y, z, e);
    //determinante(x, y, z);
    //mostrar(x, y, z);

    liberar(x, y, z);
return 0;
}