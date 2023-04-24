#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string composed of 0 or more
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j, count = 0;
	char *str, c;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
				c = (char) va_arg(args, int);
				_putchar(c);
				count++;
				break;
				case 's':
				str = va_arg(args, char *);
				for (j = 0; str[j] != '\0'; j++)
				_putchar(str[j]);
				count++;
				break;
				case '%':
				_putchar('%');
				count++;
				break;
			default:
			i++;
			continue;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
