#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && c != '\t') 
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else if (c == '\t') 
			printf("\\t");
		else
			printf("%c", c);
	}
	return 0;
}
