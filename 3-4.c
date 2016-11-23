#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa(int, char []);
void reverse(char []);

int main() {
	char s[100];
	itoa(INT_MIN, s);
	printf("\nThe padded and converted number %d is %s\n", INT_MIN, s);
	return 0;
}

void itoa(int n, char s[]) {
	int i, sign;
	unsigned int n2;
	if((sign = n) < 0)
		n2 = -n;
	else
		n2 = n;
	i = 0;
	do {
		s[i++] = n2 % 10 + '0';
	} while((n2 /= 10) > 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[]) {
	int i, j, c;
	for(i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}	
}
