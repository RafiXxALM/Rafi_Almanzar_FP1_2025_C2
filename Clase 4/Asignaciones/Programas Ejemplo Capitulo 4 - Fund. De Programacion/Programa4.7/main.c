#include <stdio.h>
#include <stdlib.h>

/* Prueba de par�metros por valor. */
int f1 (int); /* Prototipo de funci�n. El par�metro es por valor
y de tipo entero. */

int main()
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K despu�s de llamar a la funcion: %d", f1(K));
        /* Llamada a la funcion f1. Se pasa una copia de la variable K. */
    }
return 0;
}

int f1(int R)
{
R += R;
return (R);
}

