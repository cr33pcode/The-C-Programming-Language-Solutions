#include <stdio.h>
#define MAXLINE 10

int get_line(char [], int);
void copy(char [], char []);

int main()
{
	int len, max = 0;
	char string[MAXLINE];
	char longest[MAXLINE];
	while ((len = get_line(string, MAXLINE)) > 0) {
			if (len > max) {
				max = len;
				copy(longest, string);
			}
	}
	if (max > MAXLINE) {
		printf("Storage exceeded by %d\n", max-MAXLINE);
		printf("The length of the line was %d\n", max);
	}
	printf("%s\n", longest);
	return 0;
}

int get_line(char s[], int lim) {
	int i, j, c;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if(i == (MAXLINE - 1))
		while ((c = getchar()) != '\n')
			++i;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}


void copy(char to[],char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0')
        	++i;
}
