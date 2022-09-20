#include "main.h"
#include <string.h>
/**
 * print_rev - prints strings in reverse
 * @s: input
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, lens;

	lens = strlen(s);

	for (i = lens - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
