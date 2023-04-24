#include "main.h"

/**
 * _strlen - print the legnth of a string
 * @s: pointer type character
 * Return: c.
 *
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

/**
 * _strlenc - applies to constant char pointer s
 * @s: type char pointer
 * Return: c
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
