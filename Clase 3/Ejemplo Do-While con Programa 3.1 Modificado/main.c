#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int menu = 0;
    do
    {
        printf ("\n0-Salir\n1-Sumar\n2-Restar\n");
        scanf("%i",&menu);;

        if(menu < 0 || menu > 2)
        {
            printf("\nValor menu no valido");
        }
    }while(menu != 0);

    printf("Fin!");
    return 0;
}
