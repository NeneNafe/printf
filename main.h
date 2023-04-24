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
	int (*fn)();
};

/**
 * type_t - typedef for the struct format
 */

typedef struct format type_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);

#endif
