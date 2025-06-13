#include <stdio.h>
#include <stdlib.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros numeros naturales con la
ayda de una funcion. En la solucion del problema se utiliza una variable
global, aunque esto, como veremos mas adelante, no es muy recomendable. */

int cubo(void); //Protoipo de funcion.
int I;  //Variable global.

int main(void)
{
    int CUB = 0;
    for (I=1;I<=10;I++)
    {
        CUB = cubo(); //Llamada a la funcion cubo.
        printf("\nEl cubo de %d es:  %d", I, CUB);
    }

}

int cubo(void)  //Declaracion de la funcion.
//La funcion calcula elcubo de la variable global I.
{
    return (I*I*I);
}
