#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int getln(char line[], int maxline);
void copy(char to[], char from[]);

/* 1-16 print longest input line */

int main()
{
	int c;	/* current character */
	int len;	/* current line length */
	char line[MAXLINE];	/* current input line */
	
	while ((len = getln(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
	return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}