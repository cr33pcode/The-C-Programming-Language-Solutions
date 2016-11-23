#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getLine(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int reverse(char line[], char reverse[])
{
	int i, j;
	for (i = 0, j = (strlen(line) - 1); i < strlen(line); i++, j--) {
		reverse[i] = line[j];
	}
	reverse[i] = '\0';
	return 0;
}

int main()
{
	int len;
	char line[MAXLINE];
	char rev[MAXLINE];
	while (len = getLine(line, MAXLINE) > 0) {
		reverse(line, rev);
		printf("%s", rev);
	}
	return 0;
}
		
