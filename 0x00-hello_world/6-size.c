#include <stdio.h>
/**
 * main - size of various types
 *Return 0
 */
int main(void)
{
char c;
int i;
long int x;
long long int a;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(x));
printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(a));
printf("size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
