#include <stdio.h>

int main()
{
	int words, cnt, c;
	words = 0;
	cnt = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t' || (c <= '9' && c >= '0')) {
			if (cnt != 0)
				words++;

			cnt = 0;
		} else 
			++cnt;
	}

	// define array
	int wLArray[words];

	printf("%d\n", words);

	
	return 0;
}