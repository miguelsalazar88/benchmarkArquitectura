#include <stdio.h>
#include "interfaz.h"

void initMatriz(int N, int matrizA[N][N]){

    for (int i = 0; i < N; i++) {
        for (int j=0; j< N; j++){
            matrizA[i][j] = 2 * (j-i);
        }
    }

}

void sumaMatricial (int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j=0; j<N; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
        
}
    
void restaMatricial (int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]){
        for (int i = 0; i < N; i++) {
            for (int j=0; j<N; j++){
                matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }
        
    }
    
void multiplicacionMatricial(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]){
        
    for (int i = 0; i < N; i++) {
        for (int j=0; j<N; j++){
                
            matrizC[i][j] = 0;
                
            for(int k = 0; k<N; k++){
                    
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
        
}
    
void matrizTranspuesta(int N, int matrizA[N][N], int matrizT[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j=0; j<N; j++){
            matrizT[i][j] = matrizA[j][i];
        }
    }
}

void impresionMatriz(int N, int matriz[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }    
}
