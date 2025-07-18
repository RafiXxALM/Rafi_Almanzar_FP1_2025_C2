#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Minusculas y mayusculas.
El programa, al recibir como dato un arreglo unidimensional de tipo
cadena de caracteres, determina el numero de minusculas y mayusculas
que hay en cada cadena. */
void minymay(char *cad); /* Prototipo de funcion. */

int main()
{
    int i, n;
    char FRA[20][50];
    /* Observa como se declara el arreglo unidimensional de cadena de
    caracteres. */
    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        /* Para cada fila se lee la cadena correspondiente. */
        printf("Ingrese la l�nea %d de texto: ", i+1);
        fflush(stdin);
        gets(FRA[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++)
        minymay(FRA[i]);
    return 0;
}

void minymay(char *cadena)
/* Esta funcion se utiliza para calcular el numero de minusculas
y mayusculas que hay en cada cadena. */
{
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else
            if (isupper(cadena[i]))
                ma++;
        i++;
    }
    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);
}
