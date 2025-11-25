#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * 
 */
int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;

	specifier_t handlers[] = {
		{"c", print_char},
		{"d", print_deci},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	while (handlers[i].type != NULL) 
		{
			if (handlers[i].type[0] == (*format))
				{
					return (handlers[i].func);
				}
			i++;
		}
		return (NULL);
}