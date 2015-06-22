#include <stdio.h> 

#define LIMITEP 15 /* Lenght limit of words.

/*This program creates an histogram of lenghts
 *of words in any text. Display Vertical histogram */

main()
{
    int i, j, c, count, big;
    int charac[LIMITEP];
    count = 0;
    big = 0;
    
    for(i = 0; i < LIMITEP; i++)
		charac[i] = 0;
		
    while((c = getchar()) != EOF){
		count++;
        if(c == ' ' || c == '\t' || c == '\n'){
            charac[count - 2] += 1;
            count = 0;
        }
    }
    /* find the biggest */
    for (i = 0; i < LIMITEP; ++i){
       if (charac[i] > big)
           big = charac[i];
    }
    
    /*compare an decrement, print if bigger or same */
    for (j = big; j > 0; --j){
        for (i = 0; i < LIMITEP; ++i){
            if (charac[i] >= j)
                printf("#");
            else
               printf(" "); 
         }
         printf("\n");
    }
      
    for(i = 0; i < LIMITEP; i++)
	    printf("%d", i+1);
}
