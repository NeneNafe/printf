#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

/*FLAGS*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
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
int get_flags(const char *format, int *i);

#endif
