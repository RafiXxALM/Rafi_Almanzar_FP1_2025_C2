#include <stdio.h>
#include <stdlib.h>


/* Lanzamiento de martillo.
El programa, al r ecibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.

I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */


int main()
{
    int I = 0, N = 0;
    float LAN = 0, SLA = 0;
    do
    {
        printf("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &N);
    }
    while (N < 1 || N > 11);
    /* Se utilia la estructura do-while para verifiicar que el valor de N sea
    correcto. */
    for (I=1; I<=N; I++)
    {
        printf("\nIngrese el lanzamiento %d: ", I);
        scanf("%f", &LAN);
        SLA = SLA + LAN;
    }
    SLA = SLA / N;
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
    return 0;
}
