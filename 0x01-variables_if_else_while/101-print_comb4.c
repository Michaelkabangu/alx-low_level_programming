#include <stdio.h>
/**
 * main - entry point
 * Description: 'prints all possible combinations of three digits'
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (l = m + 1; l <= 9; l++)
			{
				if (n != m && n != l && m != l)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');

					if (n != 7 || m != 8 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
