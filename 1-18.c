#include <stdio.h>
#define MAX 1000

int main() {
        int i;
	char c;
	char s[MAX];
        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\t') {
			i = 0;
                      	s[i++] = c;
                        while ((c = getchar()) == ' ' || c == '\t')
				s[i++] = c;
			s[i] = '\0';
			if (c != '\n')
				printf("%s%c", s, c);
			else
				printf("\n");
        	}
                else
                        printf("%c", c);
        }
        return 0;
}
