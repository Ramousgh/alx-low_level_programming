#include "main.h"
#include <stdio.h>
/**
* _strcmp - Write a function that compares two strings
* @s1: string to compare
* @s2: second string to compare
* Return: difference in integer
*/
int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return (0);
	}
	else
	{
		return (flag);
	}
}
