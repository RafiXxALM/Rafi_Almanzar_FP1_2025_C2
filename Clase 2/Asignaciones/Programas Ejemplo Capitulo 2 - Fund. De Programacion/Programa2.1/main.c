#include <stdio.h>
#include <stdlib.h>

/* Promedio Curso.
El programa al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6.

PRO: Variable de tipo real. */

int main()
{
    float PRO = 0;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6)
        printf("\nAprobado");
    return 0;
}
