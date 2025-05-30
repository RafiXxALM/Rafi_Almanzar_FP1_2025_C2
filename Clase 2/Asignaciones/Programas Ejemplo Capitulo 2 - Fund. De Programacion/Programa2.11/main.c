#include <stdio.h>
#include <stdlib.h>
/* Billete de ferrocarril.
El programa calcula el costo de un billte de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero

DIS y TIE: variables de tipo entero
BIL: variable de tipo real. */
int main()
{
    int DIS = 0, TIE = 0;
    float BIL = 0;
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);
    if ((DIS*2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8;
    else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCosto del billete: %7.2f", BIL);
    return 0;
}
