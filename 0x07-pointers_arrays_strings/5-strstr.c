#include "main.h"
/**
 * _strstr - Finds the first occurence of a substring within a larger string
 * @haystack: input
 * @needle: input
 * Returen: a pointer to the beginning of the located substring needle
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
