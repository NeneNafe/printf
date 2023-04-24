#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

/**
 * struct format - uses conversion specifires to print a function
 * @id: conversion identfier
 * @fn: a function pointer
 */

struct format
{
	char *id;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct format format_t - typedef for the struct format
 */

typedef struct format format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_print(const char *format, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
#endif
