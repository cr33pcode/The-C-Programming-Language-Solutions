#include <stdio.h>
#define MAXLINE 1000


int any(char [], char []);
int get_line(char [], int);
	
int main() {
	int res;
	char s1[MAXLINE], s2[MAXLINE];
	printf("Enter the two strings\n");
	get_line(s1, MAXLINE);
	get_line(s2, MAXLINE);
	res = any(s1,s2);
	if (res != -1)
		printf("The first character from second string occurs in first string at %d\n", (res + 1));
	else
		printf("The first string contains no character from second string\n");
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

int any(char s1[], char s2[]) {
        int i, j, k, flag = 0;
        for (i = 0; s1[i] != '\0'; i++) {
                for (j = 0; s2[j] != '\0'; j++)
                        if (s1[i] == s2[j]) {
                                flag = 1;
				k = i;
                                goto shit;
                        }
        }
shit:
        if (flag == 0)
		return -1;
	else
		return k;
}

