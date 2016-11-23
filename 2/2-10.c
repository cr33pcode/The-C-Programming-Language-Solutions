#include <stdio.h>
#define MAXLINE 1000

int get_line(char [], int);
void lower(char []);

int main() {
	char s[MAXLINE];
	printf("Enter the string\n");
	get_line(s, MAXLINE);
	lower(s);
	printf("%s\n", s);
	return 0;
}

int get_line(char s[], int lim) {
	int c, i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;	
}

void lower(char s[]) {
        int i = 0;
        while (s[i++] != '\0')
                s[i] = ((char)s[i] >= 65 && (char)s[i] <= 90) ? (s[i] = s[i] + 32) : s[i];
}
