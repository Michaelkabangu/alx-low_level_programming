#include <stdio.h>
/**
 * main - entry point
 * Description: 'printing all numbers of base hexadecimal in lowercase)
 * Return: always 0
 */
int main(void)
{
	int n;
	int low;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
