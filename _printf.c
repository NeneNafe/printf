#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the string that takes specifiers
 * Return: the number of characters
 */

int _printf(const char *format, ...)
{
	fmt_t t[] = {
		{"%s", _string}, {"%c", _char},
		{"%%", _37},
		{"%i", _int}, {"%d", _dec}, {"%r", _srev},
		{"%R", _rot13}, {"%b", _bin}, {"%u", _unsigned},
		{"%o", _oct}, {"%x", _hex}, {"%X", _HEX},
		{"%S", _exclusive_string}, {"%p", _pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (t[j].id[0] == format[i] && t[j].id[1] == format[i + 1])
			{
				len += t[j].f(args);
				i = i + 2;
				break;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
