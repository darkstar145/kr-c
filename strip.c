#include <stdio.h>

/* 1-9 copy input to output, replacing multiple blanks by a single blank */
int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        /* if not a blank, print char */
        if (c != ' ' && c != '\t') {
            putchar(c);
        }
        /* if blank, print one, then for following blanks, do nothing until
        non-blank is reached */
        else {
            putchar(c);
            while ((c = getchar()) == ' ' || c == '\t')
                ;
            putchar(c);
        }
    }
}