#include <stdio.h>

/* 1-8 count blanks (spaces, tabs, newlines) in input */
int main()
{
    int c, blanks;
    
    blanks = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == ' ' || c == '\t')
            ++blanks;
    printf("%d\n", blanks);
}