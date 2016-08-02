#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
    int c;
    
    /* 1-6 verify that getchar() != EOF returns 0 or 1 */
    printf("'getchar() != EOF' returns: %d\n", getchar() != EOF);
    
    /* 1-7 print the value of EOF */
    printf("EOF is: %d\n", EOF);
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    

}