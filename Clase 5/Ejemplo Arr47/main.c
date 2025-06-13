#include <stdio.h>
#include <stdlib.h>

int main()
{
    int armario1[5];
    armario1[0] = 100;
    armario1[1] = 101;
    armario1[2] = 102;
    armario1[3] = 103;
    armario1[4] = 104;
    for(int i=0;i<5;i++)
    {
        printf("\nValor de armario1[%i]=%i",i, armario1[i]);
    }

    return 0;
}
