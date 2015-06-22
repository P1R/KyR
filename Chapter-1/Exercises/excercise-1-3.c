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

    fahr = lower;
    printf(" __________________________\n");
    printf("|Fahrenheit\tCelcius|\n");
    printf(" --------------------------\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f\t\t%3.3f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
