#include <stdio.h>
#include <stdlib.h>



int main()
{
    char *cad0 = "Buenos dias";

    char cad1[20] = "Hola";

    char cad2[] = "Mexico";

    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};

    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una linea de texto -se lee con gets-: \n");
    gets(cad4);
    printf("\nLa cadena ca4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\nIngrese una linea de texto -se lee con scanf-: \n");
    scanf("%s", cad5);

    char p;
    int i = 0;
    printf("\nIngrese una linea de texto - se lee cada caracter con getchar-: \n");

    while ((p = getchar())!= '\n')
        cad6[i++] = p;
    cad6[i] = '\0';

    printf("\n La cadena cad6 es: ");
    puts(cad6);

    return 0;
}
