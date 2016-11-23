#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getchars(char s[], int lim) {
	int i, l, c;
	for(i = 0, l = 0; (c = getchar()) != EOF; i++)
		if(i < lim - 1)
			s[l++] = c;
	s[l] = '\0';
	return l;
}

void escape(char t[], char s[]) {
	int i, j;
	for(i = 0, j = 0; t[i] != '\0'; i++) {
		switch(t[i]) {
			case '\n': s[j++] = '\\';
				   s[j++] = 'n';
				   break;
			case '\t': s[j++] = '\\';
				   s[j++] = 't';
				   break;
			case '\v': s[j++] = '\\';
				   s[j++] = 'v';
				   break;
			case '\r': s[j++] = '\\';
				   s[j++] = 'r';
				   break;
			case '\b': s[j++] = '\\';
				   s[j++] = 'b';
				   break;
			case '\a': s[j++] = '\\';
				   s[j++] = 'a';
				   break;
			case '\f': s[j++] = '\\';
				   s[j++] = 'f';
				   break;
			case '\\': s[j++] = '\\';
				   s[j++] = '\\';
				   break;
			case '\?': s[j++] = '\\';
				   s[j++] = '\?';
				   break;
			case '\'': s[j++] = '\\';
				   s[j++] = '\'';
				   break;
			case '\"': s[j++] = '\\';
				   s[j++] = '\"';
				   break; 
			default: s[j++] = t[i];
				 break;
		}
	}
	s[j] = '\0';
}

void unescape(char t[], char s[]) {
	int i, j;
	for(i = 0, j = 0; t[i] != '\0'; ++i) {
		if(t[i] == '\\') {
			switch(t[++i]) {
				case 'n': s[j++] = '\n';
					  break;
				case 'b': s[j++] = '\b';
					  break;
				case 'r': s[j++] = '\r';
					  break;
				case 'v': s[j++] = '\v';
					  break;
				case 'a': s[j++] = '\a';
					  break;
				case 'f': s[j++] = '\f';
					  break;
				case 't': s[j++] = '\t';
					  break;
				case '\\': s[j++] = '\\';
					   break;
				case '\?': s[j++] = '\?';
					   break;
				case '\'': s[j++] = '\'';
					   break;
				case '\"': s[j++] = '\"';
					   break;
				// if input str is incorrect then this case will be applicable
				case '\0':
				default: s[j++] = '\\';
					 i--;
					 break;
			}
		}
		else {
			s[j++] = t[i];
		}
	}
	s[j] = '\0';
}

int main() {
	char s[MAXLINE], t[MAXLINE], s1[MAXLINE];
	while(getchars(t, MAXLINE) == 0);
	escape(t, s);
	printf("\n%s\n", s);
	unescape(s,s1);
	printf("%s\n", s1);
	return 0;	
}
