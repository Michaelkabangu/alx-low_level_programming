#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the elements of an array of integers
 * @a: the array
 * @n: the number of element
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != n - 1)
printf(", ");
}
printf("\n");
}
