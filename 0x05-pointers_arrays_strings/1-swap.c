#include "main.h"
/**
 * swap_int - swaps value of two variables
 * @a: input
 * @b: second input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
