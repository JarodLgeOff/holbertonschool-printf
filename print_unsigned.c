#include "main.h"
/**
 * 
 * 
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int div = 1;
	int count = 0;

	while ((num / div) >= 10)
		div *= 10;

	while (div > 0)
	{
		_putchar((num / div) + '0');
		count++;
		num %= div;
		div /= 10;
	}
	return (count);
}