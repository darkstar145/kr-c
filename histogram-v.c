/* 1-14 print histogram of length of input, vertical bars */
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
	}
	
	int max = 0;
	for (i = 1; i < 15; i++) {
		if (wlen[i] >= max) {
			max = wlen[i];
		}
	}
	
	int row, length, rmax;
	rmax = max;
	for (row = 0; row < max; row++) {
		for (length = 1; length < 15; length++) {
			if ((rmax - wlen[length]) == 0) {
				printf("# ");
				wlen[length] += -1;
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
		rmax--;
	}
	printf("1 2 3 4 5 6 7 8 9 10 11 12 13 14\n");
}
