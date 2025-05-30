#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/* Nomina
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
nomina de la universidad.

I: variable de tipo entero.
SAL y NOM: Variables de tipo real. */

int main()
{
    int I;
    float SAL = 0, NOM = 0, impuesto = 0, neto = 0;

    for (I=1; I<=5;I++)
    {
        printf("\nIngrese el salario del profesor %d:\t", I);
        scanf("%f", &SAL);

        float IMP = SAL * 0.20;
        float SAL_Neto = SAL - IMP;
        //Imprimir salario menos el 20% de impuesto
        printf("Salario Menos Impuestos: %.2f\n", SAL_Neto);
        //imprimir el 20% del salario
        printf("Impuesto Cobrado: %.2f\n", IMP);

        impuesto += IMP;
        neto += SAL_Neto;
        NOM += SAL;
    }
    printf("\nEl total de la nomina es: %.2f\n", NOM);
// imprimir total a pagar a los profesores
    printf("Total a pagar a los profesores: %.2f\n", neto);
// imprimir total de impuestos a pagar
    printf("Total de impuestos a pagar: %.2f\n", impuesto);
    return 0;
}
