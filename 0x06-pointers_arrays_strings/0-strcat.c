#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Write a function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest with src appended
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
