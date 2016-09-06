#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

/* 1-20 detab: replace tabs in input with user-specified number of spaces */

int getln(char line[], int maxline);
void detab(char to[], char from[], int ts);

int main()
{
    char line[MAXLINE];	/* current input line */
    char dline[MAXLINE]; /* detabbed line */
	int len; /* current input line length */
	int ts; /* number of spaces per tab */
	
	/* get user-desired number of spaces per tab */
	scanf("%d", &ts);

	/* detab, print each line */
    while ((len = getln(line, MAXLINE)) > 0) {
        	/* initialize arrays */
        detab(dline, line, ts);
        printf("%s", dline);
        
        /* zero arrays */
        int i;
	    for (i=0; i<MAXLINE; i++) {
	        line[i] = 0;
	        dline[i] = 0;
	    }
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

/* detab: copy 'from' into 'to'; assume to is big enough; detab */
void detab(char to[], char from[], int ts)
{
	int i,j;
	int t,tabs;
	
	j = 0;
	for (i=0; from[i] != '\0'; ++i) {
	    if (from[i] == '\t') {
	        if (j%ts == 0) {
	            tabs = ts;
	        } else {
	            tabs = ts - j%ts;
	        }
	        
	        for (t=0; t<tabs; t++) {
	            to[j+t] = ' ';
	        }
	        j += t;
	    } 
        else {
	        to[j] = from[i];
	        ++j;
	    }
	}
	
	if (to[0] == '\n') {
	    to[0] = '\0';
	}
}