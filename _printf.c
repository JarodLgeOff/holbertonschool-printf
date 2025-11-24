#include <stdarg.h>
#include <unistd.h>
#include "project_printf.h"
/**
 * 
 */
int _printf(const char *format,...)
{
	va_list ap;
	int (*type)(va_list);
	unsigned int i = 0;
	if (format == NULL)
		return (-1);
	va_start(ap, format);

	if(!format || (format[0] == '%' && !format[1]))
	{
		return(-1);
	}
	if(!format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return(-1);
	}
	while (format[i])
}
