#include <stdio.h>
/**
 * main - entry point
 * Description: 'Print the letters of the alphabet
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
