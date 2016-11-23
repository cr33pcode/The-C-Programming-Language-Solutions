#include <stdio.h>

int bitcount(unsigned);

int main() {
	unsigned x;
	int y;
	printf("Enter the number\n");
	scanf("%u", &x);
	y = bitcount(x);
	printf("The number of 1-bits in %u are %d\n", x, y);
	return 0;
}

int bitcount(unsigned x) {
	int b;
	for (b = 0; x != 0; x &= (x-1))
		b++;
	return b;
}
