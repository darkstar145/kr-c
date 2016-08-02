#include <stdio.h>

/* 1-12 print input one word per line */
int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        /* building on strip.c, if not blank print, else insert newline and
        continue, ignoring multiple blanks */
        if (c != ' ' && c != '\t') {
            putchar(c);
        }
        else {
            putchar('\n');
            while ((c = getchar()) == ' ' || c == '\t')
                ;
            putchar(c);
            continue;
        }
    }
}