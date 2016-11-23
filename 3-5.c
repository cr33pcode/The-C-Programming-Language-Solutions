#include <stdio.h>
#include <string.h>

void itob(int, char [], int);
void reverse(char []);

int main() {
	int n, b;
	char s[10];
	printf("\nEnter the number to convert to hex and the base\n");
	scanf("%d%d", &n, &b);
	itob(n, s, b);
	printf("\nThe string is %s\n", s);
	return 0;
}

void itob(int n, char s[], int b) {
	int i, sign, remainder;
	if((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % b + '0';
	} while ((n /= b) > 0);
	if(sign < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[]) {
	int c, i, j;
	for(i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
