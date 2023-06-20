#include <stdio.h>
/**
 * main - entry point
 * Description: 'printing all possible single digits'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n <= 56)
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
