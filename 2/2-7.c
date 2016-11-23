#include <stdio.h>

unsigned invert(unsigned, int, int);

int main() {
	unsigned x, y;
	int n, p;
	printf("Enter the number, the position and no of bits to invert\n");
	scanf("%d%d%d", &x, &n, &p);
	y = invert(x, p, n);
	printf("The value is %u\n", y);
	return 0;
}

unsigned invert(unsigned x, int p, int n) {  
	return ((x >> (p+1-n))  ~(~0U << n));
}
