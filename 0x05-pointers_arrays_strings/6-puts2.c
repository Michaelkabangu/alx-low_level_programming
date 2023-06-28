#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: strings character to be printed out
 * Return: the characters followed by a new line
 */
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}

