#include <stdarg.h>
#include <unistd.h>
#include "project_printf.h"
/**
 * 
 */
int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	specifier_t handlers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_int},
		{NULL, NULL}
	};

	while (handlers[i].type//rajout type) 
		{
			if (handlers[i].type) // manque aprés .
				return (handlers[i].type[0] == (*format))
			i++;
		}
		return (NULL);
}

int _printf(const char *format,...)
{
	va_list ap;
	int (*type)(va_list);
	unsigned int i = 0;
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while ()
}