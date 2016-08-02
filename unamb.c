#include <stdio.h>

/* 1-10 copy input to output, replacing tabs with \t, backspace with \b, and
backslash with \\ */
int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        switch (c) {
        case '\t':
            printf("\\t");
            break;
        case '\b':
            printf("\\b");
            break;
        case '\\':
            printf("\\\\");
            break;
        default:
            putchar(c);
        }
    }
}