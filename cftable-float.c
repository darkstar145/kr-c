#include <stdio.h>

/* 1.4 print Celsius-Fahrenheit table
    for celsius = -20, 20, ..., 100; floating-point version */

int main()
{
    float celsius, fahr;
    int lower, upper, step;
    
    lower = -20;      /* lower limit of temperature table */
    upper = 100;    /* upper limit */
    step = 10;      /* step size */
    
    /* 1.3 print heading */
    printf("C\tF\n");
    celsius = lower;
    while (celsius <= upper)  {
        fahr = 9.0/5.0 * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}