#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
float **alocMat(int lin, int col){
    float **a;
    a = (float **) malloc (lin * sizeof(float));
    for (int i = 0; i < lin; i++){
        a[i] = (float *) malloc (col * sizeof(float));
    }
return a;
}
void povoar(int lin, int col, float **mat){
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            scanf("%f", &mat[i][j]);
        }
    }
}
void povoarA(int lin, int col, float **mat){    //povoa com numeros aleatorios
    srand(time(NULL));
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            mat[i][j] = rand() % 100 /** 1.0*/;
        }
    }
}
void mostrar(int lin, int col, float **mat){
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("%.1f\t", mat[i][j]);
        }
        printf("\n");
    }
}
float determinante(int lin, int col, float **mat){
    if (lin == col){
        float det = 0;
        if (lin ==1){
            det = mat[lin][lin];
        }else{
            int j = 1;
            for (int i = 1; i <= col; i++){
                det += mat[i][j] * compAlg(lin, col, i, j, mat);
            }
        }

return det;
    }else{
        printf("\nA matriz nao e quadrada");
return 0;
    }
}

float menComp(int lin, int col, int i, int j, float **mat){
    float **nMat = alocMat(lin-1, col-1);
    int nx = 0, ny = 0;
    for (int x = 0; x < lin; x++){
        if (x == i){
            continue;
        }
        for (int y = 0; y < col; y++){
            if (y == j){
                continue;
            }
            nMat[nx][ny] = mat[x][y];
            ny++;
        }
        ny = 0;
        nx++;
    }
    float c = determinante(lin-1, col-1, nMat);
    liberar(lin-1, col-1, nMat);
return c;
}
float compAlg(int lin, int col, int i, int j, float **mat){
    float a = (-1 ^ (i+j)) * menComp(lin, col, i, j, mat);
return a;
}
void calcEscalar(int lin, int col, float **mat, float numE){
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            mat[i][j] *= numE;
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
    int lin = 0 , col = 0;
    float **mat, numE = 2;
    
    while (lin <= 0){
        printf("Linha = ");
        scanf("%d", &lin);
        if (lin != 0){
            break;
        }
        printf("\nLinha = %d Invalido\nTente novamente\n", lin);
    }
    while (col <= 0){
        printf("Coluna = ");
        scanf("%d", &col);
        if (col != 0){
            break;
        }
        printf("\nColuna = %d Invalido\nTente novamente\n", col);
    }
    scanf("%f", &numE); // numero escalar

    mat = alocMat(lin, col);
    //povoar(lin, col, mat);
    povoarA(lin, col, mat);
    mostrar(lin, col, mat);
    calcEscalar(lin, col, mat, numE);
    mostrar(lin, col, mat);
    printf("Determinante: %.2f\n", determinante(lin, col, mat));

    liberar(lin, col, mat);
return 0;
}