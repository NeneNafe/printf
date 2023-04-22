#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: this is a character string
 * Return: The number of characters printed
 *
 * Description: _printf is a function that produces an output
 * according to a format. It then returns the number
 * of characters printed by excluding the null byte
 * used to end output to strings.
 */

int _printf(const char *format, ...)
{
	int j = 0, count = 0;
	char *str, ch;
	va_list ap;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
			{
				ch = (char) va_arg(ap, int);
				_putchar(ch);
				count++;
				break;
			}
				case 's':
			{
				str = va_arg(ap, char *);

				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					count++;
				}
				break;
			}
				case '%':
			{
				_putchar('%');
				count++;
				break;
			}
				default:
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
				break;
			}
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


