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
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (t[j].id[0] == format[i] && t[j].id[1] == format[i + 1])
			{
				len += t[j].f(args);
				i = i + 2;
				goto Here;
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
