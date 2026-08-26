#include <stdio.h>      // Interfaz Input - Output
#include <stdlib.h>
#include <time.h>
#include "modulo.h"

/*******************************************************************
 * Pontificia Universidad Javeriana
 * Materia: Sistemas Operativos
 * Tema: Programación Modular
 * Fecha: 5/8/2026
 * Hecho por: Katheryn Camacho Gonzalez
 * Objetivos:
 * - Implementar en funciones, la función principal
 * - Implementar una función: Suma de matrices
 * - Implementar un fichero de funciones
 * - Implementar un fichero de interfaz de funciones
 * - Crear un fichero de automatización de compilación
 * - Documentar y anunciar las instrucciones significativas
 * - Comprimir todo y enviarlo en la asignación
 *******************************************************************/

// Función para ingresar valores y tamaño de matriz
void funcIngreso(int entrada) {
    if (entrada != 2) {
        printf("\nUse:\n\n\t$ejecutable valor\n\n");
        exit(0);
    }
}

// Función para inicializar matriz
void iniMatrix(double **mat, int dim) {
    srand(time(NULL));

    for (int i = 0; i < dim; i++)
        for (int j = 0; j < dim; j++)
            mat[i][j] = (double)rand() / RAND_MAX * (10.0 - 1.0);
}

// Función para imprimir matriz
void impMatrix(double **mat, int dim) {
    if (dim < 10) {
        for (int i = 0; i < dim; i++) {
            for (int j = 0; j < dim; j++) {
                printf("%0.3f", mat[i][j]);
            }
            printf("\n");
        }
    }

    printf("=================================================\n");
}

// Función para sumar matrices
void sumarMatrices(double **mA, double **mB, double **mC, int dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            mC[i][j] = mA[i][j] + mB[i][j];
        }
    }
}

int main(int argc, char *argv[]) {

    funcIngreso(argc);

    /******************************************************************
     * Variables iniciales
     * Se definen las variables iniciales necesarias para la impresión
     * del mensaje.
     ******************************************************************/

    double **matrixA;
    double **matrixB;
    double **matrixC;
    int N = (int)atoi(argv[1]);

    /*****************************************************************
     * Reserva de memoria para las 3 matrices.
     * Se define la memoria para las matrices usando malloc, que permite
     * asignar memoria de manera dinámica.
     *****************************************************************/

    matrixA = (double **)malloc(N * sizeof(double *));
    matrixB = (double **)malloc(N * sizeof(double *));
    matrixC = (double **)malloc(N * sizeof(double *));

    for (int i = 0; i < N; i++) {
        matrixA[i] = (double *)malloc(N * sizeof(double));
        matrixB[i] = (double *)malloc(N * sizeof(double));
        matrixC[i] = (double *)malloc(N * sizeof(double));
    }

    // Inicializar matrices
    iniMatrix(matrixA, N);
    iniMatrix(matrixB, N);
    iniMatrix(matrixC, N);

    // Imprimir matrices aleatorias
    impMatrix(matrixA, N);
    impMatrix(matrixB, N);

    // Sumar matrices
    sumarMatrices(matrixA, matrixB, matrixC, N);

    // Imprimir matriz resultado
    impMatrix(matrixC, N);

    // Liberar memoria
    for (int i = 0; i < N; i++) {
        free(matrixA[i]);
        free(matrixB[i]);
        free(matrixC[i]);
    }

    free(matrixA);
    free(matrixB);
    free(matrixC);

    return 0;
}