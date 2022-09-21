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
	int i, j = 0;

	char concated[100];

	for (i = 0; dest[i] != '\0'; i++)
	{
		concated[j] = dest[i];
		j++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		concated[j] = src[i];

		j++;
	}
	concated[j] = '\0';
	printf("%s", concated);
	return (0);
}
