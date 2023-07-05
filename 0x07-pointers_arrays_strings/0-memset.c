#include "main.h"
/**
 * _memset - fill a black of memory with a specific value
 * @s: starting adress of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n++;
	}
	return (s);
}
