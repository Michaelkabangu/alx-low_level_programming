#include "main.h"
/**
 * main - entry point
 * Description: 'prints the alphabet in lower case'
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
