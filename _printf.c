#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - produces output according to a format
 * @format: This is a character string
 * Return: The number of characters printed
 *
 * Description: _printf is a function that produces an output
 * according to a format. It then returns the number
 * of characters printed by excluding the null byte
 * used to end output to strings
 */

int _printf(const char *format, ...)
{
	int count = 0;
	char *s, c;
	va_list ap;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = (char)va_arg(ap, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(ap, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;

					count++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(ap);

	return (count);
}
