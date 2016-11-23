#include <stdio.h>
#define MAXLINE 1000

int get_line(char [], int);
void detab(char []);

int main() {
	char s[MAXLINE];
	while (get_line(s, MAXLINE) > 0) {
		detab(s);
	}
	return 0;
}

int get_line(char s[], int lim) {
	int c, i;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

void detab(char s[]) {
	int i, j, count = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] != '\t') {
			printf("%c", s[i]);
			count++;
		}
		else {
			for (j = 0; j < (8 - count); j++)
				printf(" ");
			count = 0;
		}
	}
}
