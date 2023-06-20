#include <stdio.h>
/**
 * main - entry point
 * Description: 'print all letters in lowercase except q and e'
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
			n++;
		continue;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
