#include <stdio.h>
#include <stdlib.h>

/* Cubo-3.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función y utilizando parámetros por valor.*/

int cubo(int); //Prototipo de funcion. El parametro es de tipo entero.


int main()
{
    int I;
    for (I=1;I<=10;I++)
        printf("\nEl cubo de I es:%d", cubo(I));
    //Llamada a la funcion cubo. El paso del parametro es por valor.
    return 0;
}
int cubo(int K) //K es un parametro por valor de tipo entero.
//La funcion calcula el cubo del parametro K.
{
    return (K*K*K);
}
