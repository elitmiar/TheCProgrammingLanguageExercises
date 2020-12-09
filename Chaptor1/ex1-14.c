#include <stdio.h>

#define MAXCHARS 255

int main()
{
	int c, i, j;

	int chars[MAXCHARS];

	for(i = 0; i < MAXCHARS; ++i)
    	chars[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			continue;
		
		++chars[c];
	}


	for (i = 0; i < MAXCHARS; ++i) {
		if (chars[i] < 1)
			continue;

		printf("%4c | ", i);
		for (j = 0; j < chars[i]; ++j) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}