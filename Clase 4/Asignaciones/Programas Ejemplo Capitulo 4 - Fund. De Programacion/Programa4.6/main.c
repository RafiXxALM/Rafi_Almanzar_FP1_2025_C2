#include <stdio.h>
#include <stdlib.h>

/* Prueba de par�metros por referencia. */
int f1(int *);
/* Prototipo de funci�n. El par�metro es de tipo entero y por referencia
�observa el uso del operador de indirecci�n. */

int main()
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K despues de llamar a la funcion: %d", f1(&K));
        /* Llamada a la funci�n f1. Se pasa la direcci�n de la variable K,
        por medio del operador de direcci�n: &. */
    }
    return 0;
}

int f1(int *R)
/* La funci�n f1 recibe un par�metro por referencia. Cada vez que el
par�metro se utiliza en la funci�n debe ir precedido por el operador de
indirecci�n. */
{
*R += *R;
return *R;
}
