#include <stdio.h>

unsigned rightrot(unsigned, int);

int main() {
	unsigned x, y;
	int n;
	printf("Enter the number and the right rotation param\n");
	scanf("%d%d", &x, &n);
	y = rightrot(x, n);
	printf("The value is %u\n", y);
	return 0;
}

unsigned rightrot(unsigned x, int n) {  
	while (n-- > 0)
        	if(x & 1)
            		x = (x >> 1) | ~(~0U << 1);
        	else
            		x = x >> 1;
    	return x;
}
