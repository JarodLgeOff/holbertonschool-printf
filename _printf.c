#include <stdarg.h>
#include <unistd.h>
#include "project_printf.h"
/**
 * 
 */
int _printf(const char *format,...)
{
	va_list args;
	int (*func)(va_list);
	int i = 0;
	int count = 0;

	if (format == NULL)
	{	
		return (-1);
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			func = find_function(&format[i]);
			if (func != NULL)
			{
				count += func(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
