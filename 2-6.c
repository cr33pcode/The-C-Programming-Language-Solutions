#include <stdio.h>

unsigned setbits(unsigned, int, int, unsigned);

int main() {
	unsigned x, y;
	int n, p;
	printf("Enter the number1 and number2, the position and no of bits to invert\n");
	scanf("%d%d%d", &x, &y, &p, &n);
	x = setbits(x, p, n, y);
	printf("The value is %u\n", x);
	return 0;
}

unsigned invert(unsigned x, int p, int n, unsigned y) {  
	return ((x >> (p+1-n))  ~(~0U << n));
}
