#include "main.h"

/**
 * _putchar.c - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1.
 * On erro, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
