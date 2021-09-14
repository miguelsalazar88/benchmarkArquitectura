#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void initMatriz(int N, int matrizA[N][N]);

void sumaMatricial (int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]);

void restaMatricial (int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]);

void multiplicacionMatricial(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]);

void matrizTranspuesta(int N, int matrizA[N][N], int matrizT[N][N]);

void impresionMatriz(int N, int matriz[N][N]);



#endif



