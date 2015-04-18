/* Codigo para ser mas chingon que el DON */
#include <stdio.h>

main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == 8)
            printf("\\b");
        else if(c == '\t')
            printf("\\t");
        else if(c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}

