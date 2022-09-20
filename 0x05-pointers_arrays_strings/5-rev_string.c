#include "main.h"
#include <string.h>
/**
* rev_string - Reverses a string
* @s: The string to be modified
* Return: void
*/
void rev_string(char *s)
{
	int ch, i,  lens;

	lens = strlen(s);

	for (i = 0; i < lens / 2; i++)
	{
		ch = s[i];
		s[i] = s[lens - 1 - i];
		s[lens - 1 - i] = ch;
	}
	_putchar(s[i - 1]);
}
