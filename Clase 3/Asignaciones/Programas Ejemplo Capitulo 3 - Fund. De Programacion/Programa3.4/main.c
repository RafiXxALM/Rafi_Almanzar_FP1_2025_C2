#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Suma cuadrados.

El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismo y la suma correspondiente a dichos cuadrados. */

int main()
{
    int NUM = 0;
    long CUA = 0, SUC = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%i", &NUM);
    while (NUM)
    /* Observa que la condicion es verdadera mientras el entero es diferente de cero.*/
    {
        CUA = pow (NUM, 2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nIngrese un numero entero -0 para terminar -:\t");
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);
    return 0;
}
