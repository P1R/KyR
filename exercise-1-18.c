#include <stdio.h>

#define MAXLINE 1000 /* Maximum input length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* Prints without trailing tabs or blanks, and removes
 * lines with only blanks */
int main()
{
	int len;		/* Current line length */
	int i;		/* Used as iterator */
	int flf;	/* First letter found */
	char line[MAXLINE];		/* Current input line */

	flf = 0;
	i = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		while (i < len)		/* Loop to encounter tabs, blanks or newline characters */
		{
			if (line[i] == '\t' && flf == 0)
				i++;
			else if (line[i] == '\n' && flf == 0)
				i++;
			else if (line[i] == ' ' && flf == 0)
				i++;
			else
			{
				printf("%c", line[i]);
				flf = 1;	/* First letter found inside corresponding line */
				i++;
			}		
		}
		flf = 0;
		i = 0;
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
