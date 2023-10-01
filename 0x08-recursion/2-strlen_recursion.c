#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int line = 0;

	if (*s)
	{
		line++;
		line += _strlen_recursion(s + 1);
	}
	return (line);
}
