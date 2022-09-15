#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character
 * @c: input
 * Return: 1 if 'c' is uppercase otherwise 0
 */
int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
		_putchar(49);
	else
		_putchar(48);
}
