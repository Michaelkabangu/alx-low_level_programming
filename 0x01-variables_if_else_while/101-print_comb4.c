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

	for (n = 48; n <= 58; n++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (l = 50; l <= 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
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
