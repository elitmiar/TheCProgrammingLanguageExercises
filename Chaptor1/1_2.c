#include <stdio.h>

/* print Fahrenhein-Celsius table */

main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // Lowe limit of temparature table
	upper = 300; // Upper limit
	step = 20; // Step size


	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

}