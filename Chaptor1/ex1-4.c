#include <stdio.h> // Include information about standard input output library

/* print Fahrenhein-Celsius table */
// returning int as the exit  of main program is considered successful
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // Lowe limit of temparature table
	upper = 300; // Upper limit
	step = 20; // Step size

	// Printing heading
	printf("%s\n\n", "celsius-Fahrenheit");

	printf("%3s\t %6s\n", "Celsius", "Fahrenheit");
	// Integer is converted to float before operation is done
	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius / 5.0) * 9.0 + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}