#include <stdio.h>

int main() {
	int lower, upper;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	celsius = lower;
	printf(" Celsius to Fahrenheit \t\n");
	while (celsius <= upper) {
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("\t%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + 20;
	}
	return 0;
}
