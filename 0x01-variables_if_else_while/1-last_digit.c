#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checking the string values
 * Return: always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("The last digit of %d is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is 0\n", n);
	}
	else
	{
		printf("The last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}