#include <stdio.h>
#include <stdlib.h>

/* Funciones y parámetros. */

int F1(int , int *); /* Prototipo de función. */

int A = 3;
int B = 7;
int C = 4; /* Variables globales. */
int D = 2;

int main()
{
    A = F1 (C, &D);
    printf("\n%d %d %d %d", A, B, C, D);
    C = 3;
    C = F1 (A, &C);
    printf("\n%d %d %d %d", A, B, C, D);
    return 0;
}

int F1(int X, int *Y)
{
    int A;
    A = X * *Y;
    C++;
    B += *Y;
    printf("\n%d %d %d %d", A, B, C, D);
    *Y--;
    return (C);
}
