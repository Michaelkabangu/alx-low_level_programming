#include "main.h"
/**
 * puts_half - prints half a string
 * @str: the string to be printed in half
 * Return: the half of the string followed by a new line
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
