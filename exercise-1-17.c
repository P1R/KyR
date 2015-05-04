#include <stdio.h>

#define MAXLINE 1000 /* Maximum input length */
#define MIN 80 /* Minimium line length to print */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* Displays only the lines surpasing 80 characters */
int main()
{
	int len;		/* Current line length */
	char line[MAXLINE];		/* Current input line */
	//char current[MAXLINE];	/* Current line to be revised */

	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len >= MIN)
		{
			printf("%s\n", line);
		}
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy (char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
