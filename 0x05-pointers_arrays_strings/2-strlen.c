#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to be calculated
 * Return: the length of my string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
