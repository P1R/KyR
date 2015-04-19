/* Esta es mi version del este ejercicio. Da igual pero
 * pienso que esta era su intecion. */
#include <stdio.h>

void convtemp(float, float, float); // Prototipo

main()
{
	convtemp(0, 300, 20);
}

void convtemp(float l, float h, float s)
{
	float fahr, cel;

	fahr = l;
	printf("Fahrenheit|\tCelsius\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	while (fahr <= h)
	{
		cel = 5 * (fahr-32) / 9;
		printf("%.0f\t  |\t%.2f\n", fahr, cel);
		fahr = fahr + s;
	}
}
