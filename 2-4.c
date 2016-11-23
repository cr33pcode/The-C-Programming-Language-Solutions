#include <stdio.h>
#define MAXLINE 1000


void squeeze(char [], char []);
int get_line(char [], int);
	
int main() {
	char s1[MAXLINE], s2[MAXLINE];
	printf("Enter the two strings\n");
	get_line(s1, MAXLINE);
	get_line(s2, MAXLINE);
	squeeze(s1,s2);
	printf("The string s1 now is %s\n", s1);
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

void squeeze(char s1[], char s2[]) {
        int i, j, k, flag;
        for (i = k = 0; s1[i] != '\0'; i++) {
                flag = 0;
                for (j = 0; s2[j] != '\0'; j++)
                        if (s1[i] == s2[j]) {
                                flag = 1;
                                break;
                        }
                if (flag == 0)
                s1[k++] = s1[i];
        }
        s1[k] = '\0';
}

