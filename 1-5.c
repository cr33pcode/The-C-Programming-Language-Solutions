#include <stdio.h>

int main() {
	int lower, upper;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	fahr = upper;
	printf(" Fahrenheit to Celsius(reverse) \t\n");
	while (fahr >= lower) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("\t%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr - 20;
	}
	return 0;
}
