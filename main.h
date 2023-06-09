#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/* FOR FLAGS */

#define F_MINUS 1

#define F_PLUS 2

#define F_ZERO 4

#define F_HASH 8

#define F_SPACE 16

/**
 * struct format - matches the conversion specifiers for printf
 * @id: specifier
 * @f: function to pointer
 */

typedef struct format
{
	char *id;
	int (*f)();
} fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);
int _string(va_list vl);
int _char(va_list vl);
int _37(void);
int _HEX(va_list vl);
int _hex(va_list vl);
int _oct(va_list vl);
int _unsigned(va_list args);
int _bin(va_list vl);
int _srev(va_list args);
int _rot13(va_list args);
int _int(va_list args);
int _dec(va_list args);
int *_strcpy(char *dest, char *src);
int _pointer(va_list vl);
int _hex_aux(unsigned long int num);
int _HEX_aux(unsigned int num);
int _exclusive_string(va_list vl);
int _flags(const char *fmt, int *i);

#endif
