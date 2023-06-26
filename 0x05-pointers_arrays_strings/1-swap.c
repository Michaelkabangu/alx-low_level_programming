#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: value stored in a
 * @b: value stored in b
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int change = *b;
	*b = *a;
	*a = change;
}
