/* 1-13 print histogram of length of input */
#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

int main()
{
    int c, len, state, wlen[15];
    
    int i;
    for (i = 0; i < 15; i++) {
        wlen[i] = 0;
    }
    
    state = OUT;
    len = 0;
    while ( (c = getchar()) != EOF ) {
        if (c == ' ' || c == '\t' || c == '\n') {
            wlen[len] += 1;
            len = 0;
            state = OUT;
            continue;
        }
        else if (state == OUT) {
            state = IN;
            len++;
        }
        else if (state == IN) {
            len++;
        }
        else if (c == EOF) {
            
        }
    }
    
    for (i = 1; i < 15; i++) {
        printf("%d: ", i);
        int count;
        for (count = 0; count < wlen[i]; count++) {
            printf("#");
        }
        printf("\n");
    }
}
