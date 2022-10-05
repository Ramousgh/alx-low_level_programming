#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Write a function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: limit
 * Return: dest with src appended
 */
char *_strncat(char *dest, char *src, int n)
{

	int dlen = 0, i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (i = 0; i < n && src[i]; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
