#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} spc_list;

int _strlen(char *s);
int print_percent(void);
int _strlenc(const char *s);
int printf_char(va_list val);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _putchar(char c);

#endif
