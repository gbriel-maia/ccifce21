#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
    #include<time.h>
float ** alocMat(int lin, int col){
    float **a;
    a = (float **) malloc (lin * sizeof(float));
    for (int i = 0; i < lin; i++){
        a[i] = (float *) malloc (col * sizeof(float));
    }
return a;
}
void povoar(int lin, int col, float **mat){
    for (int i = 0; i < lin; i++){
        for (int o = 0; o < col; o++){
            scanf("%f", &mat[i][o]);
        }
    }
}
    void povoarA(int lin, int col, float **mat){    //povoa com numreos aleatorios
        srand(time(NULL));
        for (int i = 0; i < lin; i++){
            for (int o = 0; o < col; o++){
                mat[i][o] = rand() % 100 /** 1.0*/;
            }
        }
    }
void mostrar(int lin, int col, float **mat){
    for (int i = 0; i < lin; i++){
        for (int o = 0; o < col; o++){
            printf("%.1f\t", mat[i][o]);
        }
        printf("\n");
    }
}
void determinante(int lin, int col, float **mat){
    float det;
    if (lin == 1 && col == lin){
        det = mat[lin][col];
    } else if (lin == 2 && col == lin){
    } else if (lin == 3 && col == lin){
    } else {
    }

    printf("Determinante = %.2f ", det);
}
void calcEscalar(int lin, int col, float **mat, float numE){
    for (int i = 0; i < lin; i++){
        for (int o = 0; o < col; o++){
            mat[i][o] *= numE;
        }
    }
}
void liberar(int lin, int col, float **mat){
    for (int i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);
    printf("** free **\n");
}
int main(){
    setlocale(LC_ALL, "");
    int lin = 3 , col = 3;
    float **mat, numE = 2;

    //scanf("%d", &lin);
    //scanf("%d", &col);
    //scanf("%f", &numE); // numero escalar

    mat = alocMat(lin, col);
    //povoar(lin, col, mat);
    povoarA(lin, col, mat);
    mostrar(lin, col, mat);
    calcEscalar(lin, col, mat, numE);
    mostrar(lin, col, mat);
    //determinante(lin, col, mat);
    //mostrar(lin, col, mat);

    liberar(lin, col, mat);
return 0;
}