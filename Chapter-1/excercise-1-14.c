#include <stdio.h>

/* Frequency histogram of letter and character occurencies */

#define CRANGE 97 /* Character range to count */
#define INIT 32 /* Initial Character */

main()
{
	int c, i, j, big;
	int nchar[CRANGE];
	
	for (i = 0; i < CRANGE; ++i)
		nchar[i] = 0;
	
	big = 0;
	while ((c = getchar()) != EOF){
		if(c >= '!' && c <= '~')
			++nchar[(c-'!') + 2];
		else if (c == '\t')
			++nchar[0];
        else if (c == '\n')
            ++nchar[1];
	}	
	
	/* Finds the biggest number character in the ascii table */
	for (i = 0; i < CRANGE; ++i){
       if (nchar[i] > big)
           big = nchar[i];
    }
    
    /*compare an decrement, print if bigger or same */
    for (j = big; j > 0; --j){
        for (i = 0; i < CRANGE; ++i){
            if (nchar[i] >= j)
				printf("#");
            else
                printf(" ");
            if (i == 18)
				printf(" "); 
         }
         printf("\n");
    }
    
    for(i = 0; i < CRANGE; i++)
	    if (i == 0)
			printf("t");
		else if (i == 1)
			printf("n");
		else
			printf("%c", (INIT + (i-2)));
}
		
