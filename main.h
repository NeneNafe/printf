#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct format - matches the specifiers for printf
 * @fid: format identifiers for printf
 * @fn: the pointer to function associated with printf
 */
struct format
{
	char *fid;
	int (*fn)();
};

/**
 * format_t - typedef for struct format
 */
typedef struct format format_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
