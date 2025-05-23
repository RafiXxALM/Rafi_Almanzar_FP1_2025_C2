#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int OP = 0, T = 0;
    float RES = 0.0;
    printf("Ingrese la opcion del calculo y el valor entero: "),
    scanf("%i %i", &OP, &T);

    if(OP == 1)
    {
        RES = T / 5;
    }else if(OP == 2)
    {
        RES = pow(T, T);
    }else if(OP == 2 && OP == 4)
    {
        RES = 6 * T/2;
    }else
    {
        RES = 1;
    }
    printf("\nResultado:    %7.2f", RES);
    return 0;
}
