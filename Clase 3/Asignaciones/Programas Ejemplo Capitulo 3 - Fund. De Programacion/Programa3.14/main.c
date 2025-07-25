#include <stdio.h>
#include <stdlib.h>

/* Eleccion.
El programa obtene el total de votos de cada cadidato y el porcentaje
correspondiente. Tambien considera votos nulos.

VOT, C1, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real. */


int main()
{
    int VOT = 0, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SV0 = 0;
    float PO1 = 0, PO2 = 0, PO3 = 0, PO4 = 0, PO5 = 0, PON = 0;
    printf("Ingrese el primer voto: ");
    scanf("%d", &VOT);
    while (VOT)
    {
        switch(VOT)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }
        printf("Ingrese el siguiente  voto -0 para terminar-: ");
        scanf("%d", &VOT);
    }
    SV0 = C1 + C2 + C3 + C4 + C5 + NU;
    PO1 = ((float) C1 / SV0) * 100;
    PO2 = ((float) C2 / SV0) * 100;
    PO3 = ((float) C3 / SV0) * 100;
    PO4 = ((float) C4 / SV0) * 100;
    PO5 = ((float) C5 / SV0) * 100;
    PON = ((float) NU / SV0) * 100;
    printf("\nTotal de votos: %d", SV0);
    printf("\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);
    return 0;
}
