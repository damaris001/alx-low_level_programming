#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: String provided
 * Return: Always 0 (Success)
 */
int _strlen(char *s);
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
