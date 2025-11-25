#ifndef PROJECT_PRINTF.H
#define PROJECT_PRINTF.H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct specifier - structure to map format specifiers to functions
 * @type: format specifier
 * @func: function associated with the specifier
 */
typedef struct specifier
{
	const char *type;
	int (*func)(va_list);
} specifier_t;


int (*find_function(const char *format))(va_list);
int _putchar(char c);
int print_char(va_list args);
int _printf(const char *format,...);

#endif
