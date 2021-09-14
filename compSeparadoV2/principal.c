#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"
#include "tiempo.h"

int main(int argc, char **argv){

    int N = (int) atof(argv[1]);

    int matrizA[N][N];
    int matrizB[N][N];
    int matrizC[N][N];

    initMatriz(N, matrizA);
    initMatriz(N, matrizB);
    initMatriz(N, matrizC);
    
    funcionInicio();
    multiplicacionMatricial(N, matrizA,matrizB,matrizC);
    funcionFinal();   

    impresionTiempo();

    return 0;
}
