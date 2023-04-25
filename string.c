#include "main.h"

/**
 * _string - pring a string
 * @vl: argument 1
 * Return: the length of string
 */

int _string(va_list vl)
{
	char *s;
	int i, len;

	s = va_arg(vl, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; len < 0; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
