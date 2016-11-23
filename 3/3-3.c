#include <stdio.h>
#define MAXLINE 1000

int getchars(char [], int);
void expand(char [], char []);

int main() {
	char s[MAXLINE], t[MAXLINE];
	while(getchars(s, MAXLINE) == 0);
	expand(s, t);
	printf("\n%s\n", t);
}

int getchars(char s[], int lim) {
        int i, l, c;
        for(i = 0, l = 0; (c = getchar()) != EOF; i++)
                if(i < lim - 1)
                        s[l++] = c;
        s[l] = '\0';
        return l;
}

void expand(char s[], char t[]) {
	int i, j = 0, l, k, diff;
	for(i = 0; s[i] != '\0'; i++)
		if(s[i+1] == '-' && s[i+2] != '\0') {
			diff = (s[i+2] - '0') - (s[i] - '0') + 1;
			k = s[i];
			diff = (s[i+3] == '-') ? (diff - 1) : diff;
			for(l = 0; l < diff; l++, k++)
				t[j++] = (char)k;
		}
	t[j] = '\0';
}
