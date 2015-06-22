/* Codigo para contar espacios en blanco,
 * tabulaciones y lineas nuevas. */
#include <stdio.h>

main()
{
    int c, espb = 0, tab = 0, nl = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ') ++espb;
        if(c == '\t') ++tab;
        if(c == '\n') ++nl;
    }
    printf("Espacios en Blanco: %d -- ", espb); 
    printf("Tabulaciones: %d -- ", tab); 
    printf("Linea Nueva: %d", nl);
}
