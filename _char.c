#include "main.h"

/**
 * _char - prints a char.
 * @vl: arguments.
 * Return: 1.
 */
int _char(va_list vl)
{
	char s;

	s = va_arg(vl, int);
	_putchar(s);
	return (1);
}
