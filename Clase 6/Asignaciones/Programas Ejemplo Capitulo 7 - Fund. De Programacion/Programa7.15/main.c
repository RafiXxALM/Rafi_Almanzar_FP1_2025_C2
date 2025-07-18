#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por numeros y letras. */

void interpreta(char *); /* Prototipo de funcion. */

int main()
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
    return 0;
}

void interpreta(char *cad)
/* Esta funcion se utiliza para decodificar la cadena de caracteres. */
{
    int i = 0, j, k;
    while (cad[i] != '\0')
    {
        if (isalpha (cad[i])) /* Se utiliza isalpha para observar si el caracter es una letra. */
        {
            k = cad[i - 1] - 48;
            /* En la variable entera k se almacena el ascii del numero —convertido
            en caracter— que nos interesa, menos 48 que corresponde al ascii
            del dígito 0. */
            for (j = 0; j < k; j++)
                putchar(cad[i]);
        }
    i++;
    }
}
