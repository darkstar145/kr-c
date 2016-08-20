#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

/* 1-19 reverse input line-by-line */

int getln(char line[], int maxline);
void reverse(char s[], char rs[], int len);

int main() {
    char line[MAXLINE];	/* current input line */
    char reversed[MAXLINE]; /* reversed line */
	int len; /* current input line length */

    /* reverse line, print result */
    while ((len = getln(line, MAXLINE)) > 0) {
        reverse(line, reversed, len);
        printf("%s", reversed);
    }
    
	return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
	char c; /* current character */
	int i; /* current index */

	for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* reverse: reverse input */
void reverse(char s[], char rs[], int len) {
    int i;
    int last = len-2;
    
    for (i=0; i<=last; i++) {
        rs[i] = s[last-i];
        rs[last+1] = '\n';
    }
}