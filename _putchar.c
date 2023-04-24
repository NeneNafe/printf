#include "main.h"

/**
 * _putchar - prints character to the stdout
 * @c: The character
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
