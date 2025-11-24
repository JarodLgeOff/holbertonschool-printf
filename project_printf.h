#ifndef PROJECT_PRINTF.H
#define PROJECT_PRINTF.H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

typedef struct formats
{
	char *type;
	void (*find_function(va_list));
} checker;

int (*find_function(const char *format)(va_list));

#endif
