#include <stdio.h>

#define LIMITEP 15 /* Lenght limit of words.

/*This program creates an histogram of lenghts
 *of words in any text. */

main()
{
    int i, j, c, count;
    int charac[LIMITEP];
    count = 0;
    
    for(i = 0; i < LIMITEP; i++)
		charac[i] = 0;
		
    while((c = getchar()) != EOF){
		count++;
        if(c == ' ' || c == '\t' || c == '\n'){
            charac[count - 2] += 1;
            count = 0;
        }
    }
    
    for(i = 0; i < LIMITEP; i++)
	{
		printf("Long. %d ", i+1);
		for(j = 0; j < charac[i]; j++)
			printf("#");
		printf("\n");
	}	
}
