#include <stdio.h>
/**
 * main - entry point
 * Description: 'print the letters of the alphabet in lowercase in reverse'
 * Return: always 0
 */
int main(void)
{
	int low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
