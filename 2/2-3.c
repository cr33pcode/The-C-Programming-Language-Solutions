#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char s[10];
	int i = 0, n = 0, j;
	printf("\nENter the hex string");
	scanf("%s", s);
	j = strlen(s) - 1;
	if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
		j-=2;
		i+=2;
	}
	while(s[i] != '\0') {
		if(isdigit(s[i]))
			n = pow(16, j--) * (s[i] - '0') + n;
		else {
			if(s[i] == 'a' || s[i] == 'A')
				n = pow(16, j--) * 10 + n;
			else if(s[i] == 'b' || s[i] == 'B')
				n = pow(16, j--) * 11 + n;
			else if(s[i] == 'c' || s[i] == 'C')
				n = pow(16, j--) * 12 + n;
			else if(s[i] == 'd' || s[i] == 'D')
				n = pow(16, j--) * 13 + n;
			else if(s[i] == 'e' || s[i] == 'E')
				n = pow(16, j--) * 14 + n;
			else if(s[i] == 'f' || s[i] == 'F')
				n = pow(16, j--) * 15 + n;
			else {
				printf("Invalid Character\n");
				break;
			}
		}
		i++;
	}
	printf("The decimal value is %d\n", n);
	return 0;
}
