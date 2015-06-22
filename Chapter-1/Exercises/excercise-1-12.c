#include <stdio.h>

#define IN 1 /* inside a word*/
#define OUT 2 /* outside a word*/

/*count lines, words, and characters in input */
/*also add jump for each printed word*/

main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc;
        printf("%c",c);
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
            printf("\n");
        }
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf( "%d %d %d \n", nl, nw, (nc-1));
}

