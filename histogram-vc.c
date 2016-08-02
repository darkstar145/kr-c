/* 1-14 print histogram of frequencies of characters, vertical bars */
#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

int main()
{
	int c, freq, state, cfreq[26];
	
	/* initialize array to store frequencies */
	int i;
	for (i = 0; i < 26; i++) {
		cfreq[i] = 0;
	}
	
	/* loop through input and increment count for character;
	   only count letters */
	state = OUT;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			continue;
		}
		else if (c > 64 && c < 91) {
			cfreq[c-64] += 1;
		}
		else if (c > 96 && c < 123) {
			cfreq[c-96] += 1;
		}
	}
	
	/* determine highest frequency to determine number of rows */
	int max = 0;
	for (i = 1; i < 26; i++) {
		if (cfreq[i] >= max) {
			max = cfreq[i];
		}
	}
	
	/* debug: check freq counting by printing out freq for each letter */
	/* for (i = 1; i < 26; i++) {
		printf("%d", cfreq[i]);
	} */
	
	/* for each row, loop through each column and print '#' if
	   column's frequency is equal to max */
	int row, colfreq, rmax;
	rmax = max;
	for (row = 0; row < max; row++) {
		for (colfreq = 1; colfreq < 27; colfreq++) {
			if ((rmax - cfreq[colfreq]) == 0) {
				printf("# ");
				cfreq[colfreq] += -1;
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
		rmax--;
	}
	for (i = 65; i < 91; i++) {
		printf("%c ", i);
	}
	printf("\n");
	return 0;
}
