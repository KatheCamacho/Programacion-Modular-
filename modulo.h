#ifndef MODULO_H
#define MODULO_H

#include <stdio.h>      // Interfaz Input - Output
#include <stdlib.h>
#include <time.h>

/*******************************************************************
 * Pontificia Universidad Javeriana
 * INTERFAZ DE FUNCIONES
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
 ******************************************************************/

// Función para ingresar valores y tamaño de matriz
void funcIngreso(int entrada);

// Función para inicializar matriz
void iniMatrix(double **mat, int dim);

// Función para imprimir matriz
void impMatrix(double **mat, int dim);

// Función para sumar matrices
void sumarMatrices(double **mA, double **mB, double **mC, int dim);

#endif // MODULO_H
