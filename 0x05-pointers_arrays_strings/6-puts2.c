#include <stdio.h>
#include "main.h"

/**
 * _puts2 - function that prints  a string, followed by a new line , to stdout
 * @str: pointer value
 * Return: Always o (Success)
 */

void _puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
