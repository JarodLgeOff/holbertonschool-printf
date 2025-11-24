#ifndef PROJECT_PRINTF.H
#define PROJECT_PRINTF.H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int (*find_function(const char *format)(va_list));
int _putchar(char c);
int print_char(va_list args);

#endif
