#include <stdio.h>
#include <string.h>

void itoa(int, char [], int);
void reverse(char []);

int main() {
	int n, m;
	char s[10];
	printf("\nEnter the number you want to convert and the width");
	scanf("%d%d", &n, &m);
	itoa(n, s, m);
	printf("\nThe padded and converted number is %s\n", s);
	return 0;
}

void itoa(int n, char s[], int m) {
	int i, sign;
	if((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while((n /= 10) > 0);
	if(sign < 0)
		s[i++] = '-';
	while(i < m)
		s[i++] = ' ';
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
