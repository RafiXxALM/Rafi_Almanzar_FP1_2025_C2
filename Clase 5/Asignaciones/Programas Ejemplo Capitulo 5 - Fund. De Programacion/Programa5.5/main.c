#include <stdio.h>
#include <stdlib.h>

/* Frecuencia de calificaciones.
El programa, al recibir como datos las calificaciones de un grupo de 50
alumnos, obtiene la frecuencia de cada una de las calificaciones y adem�s
escribe cu�l es la frecuencia m�s alta. */

const int TAM = 50;

void Lectura(int *, int);
void Frecuencia(int , int, int , int); /* Prototipos de funciones. */
void Impresion(int *, int);
void Mayor(int *, int);

int main()
{
    int CAL[TAM], FRE[6] = {0}; /* Declaraci�n de los arreglos. */
    Lectura(CAL, TAM); /* Se llama a la funci�n Lectura. */
    Frecuencia(CAL, TAM, FRE, 6);
    /* Se llama a la funci�n Frecuencia, se pasan ambos arreglos. */
    printf("\nFrecuencia de Calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
    return 0;
}

void Lectura(int VEC[], int T)
/* La funci�n LLeeccttuurraa se utiliza para leer el arreglo de calificaciones. */
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese la calificaci�n -0:5- del alumno %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}

void Impresion(int VEC[], int T)
/* La funci�n IImmpprreessii��nn se utiliza para imprimir el arreglo de frecuencias. */
{
    int I;
    for (I=0; I<T; I++)
    printf("\nVEC[%d]: %d", I, VEC[I]);
}

void Frecuencia(int A[], int P, int B[], int T)
/* Esta funci�n calcula la frecuencia de calificaciones. */
{
    int I;
    for (I=0; I<P; I++)
    if ((A[I] >= 0) && (A[I] < 6)) /* Se valida que la calificaci�n sea correcta. */
    B[A[I]]++; /* Observa la forma de almacenar e incrementar las frecuencias. */
}

void Mayor(int *X, int T)
/* Esta funci�n obtiene la primera ocurrencia de la frecuencia m�s alta. */
{
    int I, MFRE = 0, MVAL = X[0];
    for (I=1; I<T; I++)
    if (MVAL < X[I])
    {
        MFRE = I;
        MVAL = X[I];
    }
    printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL);
}

