#include <stdio.h>

#define LOWER   0   /* lower limit of table */
#define UPPER   300 /* upper limit */
#define STEP    20  /* step size */

/* print Fahrenheit-Celsius table */
/* 1-15 use function for conversion */

double f2c(int fahr);

int main()
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, f2c(fahr));
	
	return 0;
}

double f2c(int fahr) {
	return (5.0/9.0)*(fahr-32);
}