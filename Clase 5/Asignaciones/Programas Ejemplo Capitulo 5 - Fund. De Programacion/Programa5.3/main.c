#include <stdio.h>
#include <stdlib.h>

/* Apuntadores, variables y valores. */

int main()
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[3] = %d \t Z[4]= %d", X, Y,Z[0], Z[1], Z[2], Z[3], Z[4]);
    int *IX; /* IX representa un apuntador a un entero. */
    IX = &X; /* IX apunta a X. IX tiene la direcci�n de X. */
    Y = *IX; /* Y toma el valor de X, ahora vale 3. */
    *IX = 1; /* X se modifica, ahora vale 1. */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = &Z[2]; /* IX apunta al tercer elemento del arreglo Z. */
    Y = *IX; /* Y toma el valor de Z[2], ahora vale 6. */
    *IX = 15; /* Z[2] se modifica, ahora vale 15. */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    X = *IX + 5; /* X se modifica, ahora vale Z[2] + 5 = 20. Recuerda que *IX contiene el valor de Z[[2]].. */
    *IX = *IX - 5; /* Z[[2]] se modifica, ahora vale 10. */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    ++*IX; /* Z[2] se modifica, se incrementa en 1. Z[2] ahora vale 11. */
    *IX += 1; /* Z[2] se vuelve a modificar, ahora vale 12. */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    X = *(IX + 1); /* X se modifica. El apuntador IX accede temporalmente a Z[3], por lo tanto X toma este valor (8). Observa que IX no se reasigna */
    Y = *IX; /* Y se modifica, toma el valor de Z[2] (12). */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = IX + 1; /* IX se modifica. Observa la forma de mover el apuntador.
    Ahora IX apunta al cuarto elemento de Z (Z[3]). */
    Y = *IX; /* Y se modifica, ahora vale Z[3] (8). */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = IX + 4; /* IX se modifica. Observa que el apuntador se mueve
    4 posiciones y cae en una direcci�n afuera del arreglo. Esto ocasionar� un
    error. */ Y = *IX; /* Y se modifica, toma el valor (basura) de una celda
    incorrecta. Es un error que no se�ala el compilador del lenguaje C. */
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    IX = &X; /* IX apunta a la variable entera X. */
    IX = IX + 1; /* IX se mueve una posici�n y cae en una celda incorrecta. */
    X = *IX; /* X toma el valor (basura) de la celda a la que apunta IX.*/
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    return 0;
}
