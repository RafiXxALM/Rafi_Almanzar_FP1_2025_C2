#include <stdio.h>
#include <stdlib.h>

// Vamos a imprimir la nota de un estudiante en letras
// valor maximo es 100 y es minimo es 0
//A se imprime A Cuando el valor es mayor igual de 90
//B valor entre menor de 90 y mayor de 79
//C Valor entre 70 y 79
//F menor de 70

/*  int numero negativos y positivos
    unsigned int de 0 y positivos
    float precision simple de 32 bits
    double precision de 64 bits
    char 1 byte 8 bits */

int main()
{
    //declarando y inicializacion
    int nota = 0;
    printf("\nIngrese la nota: ");
    scanf("%i", &nota);
    //validar el dato
    if((nota >= 0) && (nota <= 100))
    /*Version 1
    {
        // ejecutar el codigo
        if(nota >= 90)
        {
            printf("\nNota de %i[%c]",nota ,'A');
        }
        if(nota < 90 && nota>= 80)
        {
            printf("\nNota de %i[%c]",nota ,'B');
        }
        if(nota < 80 && nota>= 70)
        {
            printf("\nNota de %i[%c]",nota ,'C');
        }
        if(nota < 70)
        {
            printf("\nNota de %i[%c]",nota ,'F');
        }
    }else
    {
        printf("\nValor de nota invalido");
    }*/
    //version 2
    {
        if(nota <70)
        {
            printf("\nNota de %i[%c]",nota ,'F');
        }else if(nota < 80)
        {
            printf("\nNota de %i[%c]",nota ,'C');
        }else if(nota < 90)
        {
            printf("\nNota de %i[%c]",nota ,'B');
        }else if(nota <= 100)
        {
            printf("\nNota de %i[%c]",nota ,'A');
        }else
        {
            printf("\nValor Desconocido");
        }

    }else
    {
        printf("\nValor de nota invalido");
    }

    printf("\nFin de programa");
    return 0;
}
