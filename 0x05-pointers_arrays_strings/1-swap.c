#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first param
 * @b: second param
 * @c: output value that would be swapped
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

