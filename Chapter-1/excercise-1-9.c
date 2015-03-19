#include <stdio.h>

main()
{
    int c, ow = 0;
    
    while((c = getchar()) != EOF){
        if(c != ' '){
            putchar(c);
            ow = 0;
        }
        if(c == ' ' && ow == 0){
            putchar(' ');
            ow = 1;
        }
    }
}
