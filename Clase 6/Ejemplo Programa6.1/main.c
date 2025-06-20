#include <stdio.h>
#include <stdlib.h>

/* Diagonal principal.
EL programa, al recibir como dato una matriz de tipo entero, escribe la
diagonal principal. */

const int TAM = 3;

void Lectura(int [][TAM], int); //Prototipo de funciones.
void Imprime(int [][TAM], int);
/* Observa que siempre es necesario declarar el numero de columnas. Si no lo
haces, el compilador marcara un error de sintaxis. */

int main()
{
    int MAT[TAM][TAM];
    Lectura(MAT, TAM);
    Imprime(MAT, TAM);
    return 0;
}

void Lectura(int A[][TAM], int F)
/* La funcion Lectura se utiliza para leer un arreglo bidimensional. Observa
que solo se debe pasar como parametro el numero de filas ya que la matriz
es cuadrada. */
{
    int Fi = 0, Co = 0;
    for (Fi=0;Fi<F;Fi++)
    {


            for (Co=0;Co<F;Co++)
        {
            printf("Ingrese el elemento %d %d: ", Fi+1, Co+1);
            scanf("%d", &A[Fi][Co]);
        }

    }
}

void Imprime(int A[][TAM], int F)
/* La funcion Imprime se utiliza para escribir un arreglo bidimensional
cuadrado de F filas y columnas. */
{
    int Fi = 0 , Co = 0;
    for (Fi=0;Fi<F; Fi++)
        for (Co=0;Co<TAM; Co++)
            if (Fi == Co)
                printf("\nDiagonal %d %d: %d ", Fi, Co, A[Fi][Co]);
}
