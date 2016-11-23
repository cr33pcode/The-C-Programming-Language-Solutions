#include <stdio.h>
#define MAXLINE 1000

int get_line(char [], int);

int main() {
	char s[MAXLINE];
	while (get_line(s, MAXLINE) > 0) {
		printf("%s\n", s);
	}
	return 0;
}

int get_line(char s[], int lim) {
	int i = 0, c;
        while (i < (MAXLINE - 1)) {
                if ((c = getchar()) != EOF) {
                        if (c != '\n')
                        	s[i++] = c;
                } else {
                        break;
                }
        }
        if (c == '\n')
        	s[i++] = c;
        s[i] = '\0';
	return i;
}
