#include "main.h"

/**
 * _putchar - prints a character to the stdout
 * @c: The character to be printed
 * Return: On success 1.
 * 0n error, -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
