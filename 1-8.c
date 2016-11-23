#include <stdio.h>

int main()
{
	char c;
	int nblanks, ntabs, nlines;
	nblanks = ntabs = nlines = 0;
	while((c = getchar()) != EOF)
	{
		if (c == '\n') nlines++;
		else if (c == '\t') ntabs++;
		else if (c == ' ') nblanks++;
	}
	printf("The number of blanks, lines and tabs are %d, %d and %d respectively\n", nblanks, nlines+1, ntabs);
	return 0;
}
