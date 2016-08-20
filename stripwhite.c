#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

/* 1-18 strip trailing white space, empty lines */
int getln(char line[], int maxline);
void stripwhite(char line[], int len);

int main()
{
	char line[MAXLINE];	/* current input line */
	int len = 0;
	int i = 0;

	len = getln(line, MAXLINE);

	stripwhite(line, len);
	printf("%s", line);
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

/* stripwhite: remove trailing whitespace, delete entirely blank lines */
void stripwhite(char line[], int len) {
	int i = 0;

	/* delete blank lines */
	if (line[0]=='\n') {
		line[0] = '\0';
	}

	/* strip trailing whitespace */
	for (i=len-2; i>=0; i--) {
		if (line[i]==' ' || line[i]=='\t') {
			continue;
		} else {
			line[i+1] = '\n';
			line[i+2] = '\0';
			break;
		}
	}

}
