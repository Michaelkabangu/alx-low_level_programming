#include <stdio.h>
/**
 * main - entry point
 * Description: 'prints the letters of alphabet in upper and lower case
 * Return: always 0
 */
int main(void)
{
	int low;
	int high;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (high = 'A'; high <= 'Z'; high++)
	{
		putchar(high);
	}
	putchar('\n');
	return (0);
}
