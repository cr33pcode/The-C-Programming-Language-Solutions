#include <stdio.h>

float fahr_to_celsius(float);

int main() {
	int lower, upper;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	fahr = lower;
	printf(" Fahrenheit to Celsius \t\n");
	while (fahr <= upper) {
		celsius = fahr_to_celsius(fahr);
		printf("\t%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + 20;
	}
	return 0;
}

float fahr_to_celsius(float fahr) {
	float celsius;
	celsius = (5.0/9.0) * (fahr - 32.0);
	return celsius;
}
