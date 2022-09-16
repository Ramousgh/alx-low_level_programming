#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: input
 * Return: 1 if 'c' is uppercase otherwise 0
 */
int _isupper(int c)
{

	if ((c >= 'A')  && (c <= 'Z'))
		_putchar(49);
	else
		_putchar(48);
}
