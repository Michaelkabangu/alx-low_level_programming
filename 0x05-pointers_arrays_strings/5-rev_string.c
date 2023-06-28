#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: string to be reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int i = 0;
	int n;

	while (s[i] != '\0')
		i++;
	for (n = 0; n < i; n++)
	{
		i--;
		rev = s[n];
		s[n] = s[i];
		s[i] = rev;
	}
}

