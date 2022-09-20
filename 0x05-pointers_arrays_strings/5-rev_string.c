#include "main.h"
#include <string.h>
/**
* rev_string - Reverses a string
* @s: The string to be modified
* Return: void
*/
void rev_string(char *s)
{
	char ch;

	int i;

	int lens = strlen(s);

	for (i = 0; i < (lens / 2); i++)
	{
		ch = s[i];
		s[i] = s[lens - i - 1];
		s[lens - i - 1] = ch;
	}
}
