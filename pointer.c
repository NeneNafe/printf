#include "main.h"

/**
 * _pointer - prints an hexgecimal number.
 * @vl: arguments.
 * Return: counter.
 */
int _pointer(va_list vl)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(vl, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = _hex_aux(a);
	return (b + 2);
}
