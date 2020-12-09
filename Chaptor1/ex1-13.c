#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORDLEN 10

int main()
{
	int c, i, j, state, nchar, idx;
	state = IN;

	nchar = 0;
	int wordlen[MAXWORDLEN];

	for(i = 0; i < MAXWORDLEN; ++i)
    wordlen[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == OUT) {
				if (nchar > 10) {
					idx = 9;
				} else {
					idx = nchar - 1;
				}

				++wordlen[idx];
				state = IN;
				nchar = 0;
			}
		} else {
			state = OUT;
			nchar++;
		}		
	}


	for (i = 0; i < MAXWORDLEN; ++i) {
		printf("%2d | ", i + 1);
		for (j = 0; j < wordlen[i]; ++j) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}