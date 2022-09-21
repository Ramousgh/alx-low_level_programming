#include "main.h"
#include <string.h>

/**
 * _strcat - Write a function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest with src appended
 */
char *_strcat(char *dest, char *src)
{
	int i;

	len = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + len] = src[i];
	}
	dest[i + len] = '\0';

	return (dest[i + len]);
}
