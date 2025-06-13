#include <stdio.h>
#include <stdlib.h>

/* Conflicto e variables con el mismo nombre. */

void f1(void); //Prototipo de funcion
int K = 5;  //Variante global.

int main()
{
    int I = 0;
    for (I=1;I<=3;I++)
        f1();
    return 0;
}
void f1(void)
/* La funcion utiliza tanto la variable local I como la variable
global I. */
{
    int K = 2; // Variable local.
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);
    ::K = ::K + K; //Uso de ambas variables.
    printf("\nEl valor de la variable global es: %d", ::K);
}
