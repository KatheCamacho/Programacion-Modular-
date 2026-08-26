#include <stdio.h>      // Interfaz Input - Output
#include <stdlib.h>
#include <time.h>
#include "modulo.h"

/*******************************************************************
 * Pontificia Universidad Javeriana
 * FUNCIONES
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
