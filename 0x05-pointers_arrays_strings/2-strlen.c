#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string
 * @s: input
 * Return: count of string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		*s++;
	}
	return (count);
}
