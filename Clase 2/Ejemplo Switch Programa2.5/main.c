#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Funcion Matematica.
El programa obtiene el resultado de una funcion.

OP y T: variables de tipo entero.
RES: variable de tipo real. */

int main()
{
    int OP = 0, T = 0;
    float RES = 0.0;
    printf("Ingrese la opcion del calculo y el valor entero: "),
    scanf("%i %i", &OP, &T);

    switch(OP)
    {
        case 1: RES = T / 5;
         break;
        case 2: RES = pow(T, T);
        /* La funcion pow esta definida en la biblioteca math.h. */
         break;
        case 3:
        case 4: RES = 6 * T/2;
         break;
        default: RES = 1;
         break;
    }
    printf("\nResultado:    %7.2f", RES);
    return 0;
}
