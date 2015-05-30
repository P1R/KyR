#include <stdio.h>

#define MAX 1000 /* Maximum length of line permitted */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char line[], int size);

int main()
{
	char line[MAX];
	int len;
	
	while ((len = getline(line, MAX)) > 0)
	{
		reverse(line, len);
		printf("%s", line);
	}
	return 0;
}

/* Gets the incoming linr from current input */
int getline (char s[], int lim)
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

/* Inverts the string input 's' */
void reverse (char l[], int s)
{
	int i, len;
	char as[s];
	
	len = s;
	copy(as, l);
	for (i = 0; i < len; i++)
		l[i] = as[len-1-i];
	l[i] = '\0';
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy (char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
