#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses contents of an array
 * @n: number of array elements
 * @a: name of array
 * Return: reversed element
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
