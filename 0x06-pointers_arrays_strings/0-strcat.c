#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
