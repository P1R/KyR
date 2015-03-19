#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;       /* step size */

    celsius = lower;
    printf(" _______________________\n");
    printf("|Celcius\tFahrenheit|\n");
    printf(" -----------------------\n");
    while (celsius <= upper) {
        //celsius = 5 * (fahr-32) / 9;
        //fahr = (9.0/5)*celsius+32;
        fahr = (9 * celsius / 5) + 32;
        printf("%3.0f\t\t%3.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
